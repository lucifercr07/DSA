#include <bits/stdc++.h>

using namespace std;

typedef pair<int, string> pairs;
pairs p[10000];
set<pairs> s1;
set<pairs>::iterator it;
int i=0;

string retrieve(int num)
{
	for(it=s1.begin();it!=s1.end();++it)
	{
		pairs m = *it;
		if(m.first==num)
		{
			return m.second;
		}
	}
}
int main()
{
	int t,q;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string s;int num;
		cin>>num>>s;
		p[i].first=num;
		p[i].second=s;
	}
	for(it=s1.begin();it!=s1.end();++it)
		s1.insert(p[i]);

	cin>>q;
	while(q--)
	{
		int num;
		cin>>num;
		string p=retrieve(num);
		cout<<p<<endl;
	}
}