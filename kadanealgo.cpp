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
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int cur_max=arr[0],maxx=arr[0];
		for(int i=1;i<n;++i)
		{
			cur_max=max(arr[i],cur_max+arr[i]);
			maxx=max(maxx,cur_max);
		}
		cout<<maxx<<endl;
	}
}