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
		char p[n];
		for(int i=0;i<n;++i)
			cin>>p[i];
		map<char, int> m1;
		map<char, int>::iterator it;
		for(int i=0;i<n;++i)
			m1[p[i]]=m1[p[i]]+1;

		//for(it=m1.begin();it!=m1.end();++it)
		//	cout<<it->first<<" "<<it->second;
		//cout<<endl;
		
		int flag=0;
		for(int i=0;i<n;++i)
			if(m1[p[i]]==1)
			{
				cout<<p[i]<<endl;
				flag=1;
				break;
			}
		if(flag==0)
			cout<<"-1"<<endl;
	}
}