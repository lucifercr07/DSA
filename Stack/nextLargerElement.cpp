//find the next greater element for each element of the array in order of their appearance in the array.
//If no such element exists, output -1 
#include <stack>
#include <iostream>
#include <map>
using namespace std;

int main() {

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n];
        map<int, int> m1;
        for(int i=0;i<n;++i)
        {
            cin>>arr[i];
            m1[arr[i]]=-1;
        }
        
            
        stack<int> s;
        s.push(arr[0]);
        for(int i=1;i<n;++i)
        {
            int next=arr[i];
            if(!s.empty())
            {
                int a=s.top();
                s.pop();
                while(a<next)
                {
                    m1[a]=next;
                    if(s.empty())
                        break;
                    a=s.top();
                    s.pop();
                }
                if(a>next)
                    s.push(a);
            }
            s.push(next);
        }
        for(int i=0;i<n;++i)
            cout<<m1[arr[i]]<<" ";
        cout<<'\n';
    }
	return 0;
}