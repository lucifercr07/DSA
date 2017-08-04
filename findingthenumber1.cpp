//Code takes less execution time then the one suing sets.


#include <bits/stdc++.h>

using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int *arr=(int*)malloc((2*n+2)*sizeof(int));
	    for(int i=0;i<(2*n+2);i++)
	        arr[i]=0;
	    for(int i=0;i<(2*n+2);i++)
	    {
	        int num;
	        cin>>num;
	        arr[num]++;
	    }
	    for(int i=0;i<(2*n+2);i++)
	    {
	    	if(arr[i]==1)
	    		cout<<i<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}