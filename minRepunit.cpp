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
		int num=1,count=1;
		assert(n%10==3);
		while(num!=0)
		{	
			num=(num*10+1)%n;
			count++;
		}
		cout<<count<<endl;
	}
}