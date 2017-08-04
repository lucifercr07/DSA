#include<bits/stdc++.h>

using namespace std;

vector<int> graph[10001];


int * topoSort(vector<int> graph[],int N);

int main()
{
int T;
cin>>T;
while(T--)
{
    memset(graph,0,sizeof graph);
    int N,E;
    cin>>E>>N;
    for(int i=0;i<E;i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
    }

    int *res = topoSort(graph,N);
    bool valid =true;
    for(int i=0;i<N;i++)
    {
        int n=graph[res[i]].size();
        for(int j=0;j<graph[res[i]].size();j++)
        {
            for(int k=i+1;k<N;k++)
            {
                if(res[k]==graph[res[i]][j])
                    n--;
            }
        }
        if(n!=0)
        {
            valid =false;
            break;
        }
    }
    if(valid==false)
        cout<<0<<endl;
    else
        cout<<1<<endl;
    free(res);
}

}

/* You need to complete this function */
void topoSortUtil(int v, vector<int> graph[],int *visited, stack<int> &s)
{
    visited[v]=1;
    for(int i=0;i<graph[v].size();++i)
    {   
        int u=graph[v][i];
        if(!visited[u])
        {    
            topoSortUtil(u,graph,visited,s);

        }
        
    }
    s.push(v);
}

int * topoSort(vector<int> graph[], int N)
{
   // Your code here
   int visited[N];
   memset(visited, 0, sizeof visited);
   int *array=(int*)malloc(N*sizeof(int));
   stack<int> s;
   for(int i=0;i<N;i++)
        if(!visited[i])
        {
            topoSortUtil(i, graph,visited, s);
            
        }
    
    for(int i=0;i<N&&!s.empty();++i)
    {    
        array[i]=s.top();
        s.pop();
    }
   return array;
}