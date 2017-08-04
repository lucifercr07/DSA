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
		int diff[n];
		for(int i=0;i<n;i++)
			diff[i]=arr[i]-i;
		int max=*max_element(diff,diff+n);
		int min=*min_element(diff,diff+n);

		cout<<max-min<<endl;
	}
}