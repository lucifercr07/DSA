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
	    vector<int> vec(n);
	    for(int i=0;i<n;++i)
	    	cin>>vec[i];
	    int need=1,sum_p=0,sum_n=0;
	    for(int i=0;i<n;++i)
	    {
	    	if(vec[i]>0)
	    		sum_p+=vec[i];
	    	else
	    	{
	    		sum_n+=abs(vec[i]);
	    		if(sum_p-sum_n<0)
	    		{
	    			need+=abs(sum_p-sum_n);
	    		}
	    	}
	    }
	    cout<<need<<endl;
	    
	}
	return 0;
}