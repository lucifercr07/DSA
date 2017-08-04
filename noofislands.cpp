#include <bits/stdc++.h>
using namespace std;
#define MAX 1000  

int findIslands(int A[MAX][MAX],int N,int M);
int main() {
	// your code goes here
	int T;
	cin>>T;

	int A[MAX][MAX];
	while(T--)
	{
		int N,M;
		cin>>N>>M;
		memset(A,0,sizeof A);
		for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
		cin>>A[i][j];
		cout<<findIslands(A,N,M)<<endl;
	}
	return 0;
}

bool isSafe(int row,int col,int A[MAX][MAX],int visited[MAX][MAX],int N,int M)
{
    if(row>=0&&col>=0&&row<N&&col<M&&A[row][col]==1&&!(visited[row][col]))
        return true;
    else
        return false;
}

void dfs(int i,int j,int A[MAX][MAX],int visited[MAX][MAX],int N,int M)
{
    
    static int rownbr[]={-1,-1,-1,0,0,1,1,1};
    static int colnbr[]={-1,0,1,-1,1,-1,0,1};
    visited[i][j]=1;
    for(int k=0;k<8;++k)
    {
        int xx=i+rownbr[k];
        int yy=j+colnbr[k];
        if(isSafe(xx,yy,A,visited,N,M))
            dfs(xx,yy,A,visited,N,M);
    }
}  

int findIslands(int A[MAX][MAX], int N, int M)
{
//Your code here
    int visited[MAX][MAX],islands=0;
    memset(visited,0,sizeof visited);
    for(int i=0;i<N;++i)
    {    for(int j=0;j<M;++j)
        {
            if(A[i][j]==1&&!(visited[i][j]))
            {
               dfs(i,j,A,visited,N,M);
               ++islands;
            }
        }
    }
    return islands;
}
