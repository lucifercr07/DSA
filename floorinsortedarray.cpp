#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		vector<int> vec(n);
		for(int i=0;i<n;i++)
			cin>>vec[i];
		int ans=-1,mid,low=0,high=n-1;
		while(low<=high)
		{
			mid=(low+high)/2;
			if(vec[mid]==x)
			{
				ans=mid;
				for(int i=mid+1;i<n;i++)
				{
					if(vec[i]==x)
						ans=i;
				}
				break;
			}
			else if(vec[mid]>x)
			{
				high=mid-1;
			}
			else
			{
				ans=mid;
				low=mid+1;
			}

		}
		cout<<ans<<endl;
	}
}