#include <bits/stdc++.h>
using namespace std;

int longestUniqueSubstr(string s)
{
    int n = s.length();
    int cur_len=1,max_len=1,prev_index;
    
    int *visited=(int*)malloc(sizeof(int)*256);
    for(int i=0;i<256;i++)
        visited[i]=-1;
        
    visited[s[0]]=0;
    
    for(int i=1;i<n;i++)
    {
        prev_index=visited[s[i]];
        if(prev_index==-1||i-cur_len>prev_index)
            cur_len++;
            
        else
        {
            if(cur_len>max_len)
                max_len=cur_len;
            
            cur_len=i-prev_index;
        }
        visited[s[i]]=i;
    }
    if(cur_len>max_len)
        max_len=cur_len;
    free(visited);
    return max_len;
    
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int length=longestUniqueSubstr(s);
	    cout<<length<<endl;
	}
	return 0;
}