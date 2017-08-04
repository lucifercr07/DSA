#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n,m;
	cin>>n>>m;
	vector<long long> vec(n);
	for(int i=0;i<n;i++
)		cin>>vec[i];

	int temp=0,count=0;
	for(int i=0;i<n;i++)
	{
		temp+=vec[i];

		cout<<"i "<<i<<"temp "<<temp<<endl;
		if(temp>m)
		{
			temp=0;
			i--;
			count++;
		}

	}
	cout<<count<<endl;
}