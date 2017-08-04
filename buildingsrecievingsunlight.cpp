#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count=0,temp=INT_MIN;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int num;
			cin>>num;
			if(num>=temp)
			{
				temp=num;
				count++;
			}
		}
		cout<<count<<endl;
	}
}