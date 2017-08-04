#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		std::vector<int> v(n);
		for(int i=0;i<n;i++)
			cin>>v[i];
		int sum_max=0;
		for(int i=0;i<n;i++)
		{
			int temp=0;
			
			for(int j=0;j<n;j++)
			{
				if(i!=j)
				{
					temp=abs(v[i]-i)-abs(v[j]-j);
					sum_max=max(temp,sum_max);
				}
			}
		}
		cout<<sum_max<<endl;
	}
}