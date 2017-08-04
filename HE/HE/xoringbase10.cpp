#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n,k;
	cin>>n>>k;
	vector<long long> vec(n);
	for(long long i=0;i<n;i++)
		cin>>vec[i];
	long long maxx=INT_MIN,sum=0;
	if(k==1)
	{
		sort(vec.begin(),vec.end(),greater<int>());
		cout<<(vec[0]%10)<<endl;
	}
	else
	{
		long long cur_max=vec[0],maxx=vec[0];
		for(long long i=1;i<n;i++)
		{
			long long temp=((cur_max+vec[i])%10);
			cur_max=max(cur_max,temp);
			maxx=max(maxx,cur_max);
			cout<<cur_max<<" "<<maxx<<endl;
			cout<<endl;
		}
		cout<<maxx<<endl;
	}
	
}
