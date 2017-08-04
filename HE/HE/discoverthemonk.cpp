#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n,q;
    cin>>n>>q;
    vector<long> vec(n);
    for(long i=0;i<n;i++)
    	cin>>vec[i];
    while(q--)
    {
    	long num;
    	cin>>num;
    	long ub=0,lb=vec.size()-1,flag=0;
    	while(lb>=ub)
    	{
    		long mid=(lb+ub)/2;
    		if(vec[mid]==num)
    		{	
    			cout<<"YES"<<endl;
    			flag=1;
    			break;
    		}
    		
    		if(vec[mid]>num)
    			ub=mid+1;
    		
    		if(vec[mid]<num)
    			lb=mid-1;
    	}
    	if(flag==0)
    		cout<<"NO"<<endl;
    }
    
    return 0;
}
