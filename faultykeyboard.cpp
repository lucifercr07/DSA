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
	    int s(n);
	    int i=1;
	    int max=INT_MIN,flag=0;
	    while(n>1)
	    {
	        if(i<10)
	        {
	            if(flag==0)
	           	{
	           		flag=1;
	           		n--;
	           	}
	            else
	            {
	            	i++;
		            max=i;
		            n--;
		            if(n==1)
		           	break;
	       		}
	        }
	        if(i>=10&&i<99)
	        {
	            i++;
	            max=i;
	            n-=2;
	            if(n==2)
	            break;
	       }
	       if(i>=100&&i<999)
	        {
	            i++;
	            max=i;
	            n-=3;
	            if(n==3)
	            break;
	       }
	       if(i>=1000&&i<9999)
	        {
	            i++;
	            max=i;
	            n-=4;
	            if(n==4)
	            break;
	       }
	       if(i>=10000&&i<99999)
	        {
	            i++;
	            max=i;
	            n-=5;
	            if(n==5)
	            break;
	       }
	    }
	    if(s<10)
	    	cout<<max+1<<endl;
	    else
	    cout<<max<<endl;
	}
	return 0;
}