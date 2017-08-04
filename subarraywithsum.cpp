#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int s;
		cin>>s;
		vector<int> vec(n);
		for(int i=0;i<n;i++)
			cin>>vec[i];

		int start_index=0,sum=0,i=0,flag=0;
		for(;i<n;)
		{
			sum+=vec[i];
			//cout<<sum<<endl;
			if(sum>s)
			{
				sum=0;
				i=start_index+1;
				start_index=i;
				//cout<<"s: "<<start_index<<endl;				
			}
			else if(sum==s)
			{
				flag=1;
				break;
			}
			else
			{
				i++;	
			}

		}
		if(flag==0)
			cout<<"-1"<<endl;
		else
			cout<<start_index+1<<" "<<i+1<<endl;
	}
}