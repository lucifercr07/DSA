
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> vec(n);
	map<int,int> m;
	set<int> s;

	for(int i=0;i<n;i++)
	{
		cin>>vec[i];
		m[vec[i]]=i;
		//s.insert(vec[i]);
	}

	set<int> s2;
	map<int,int>::iterator it;
	for(it=m.begin();it!=m.end();++it)
	{
		s2.insert(it->second);
	}
	long long ans=0;
	s.clear();
	for(int i=0;i<n;i++)
	{
		if(s2.count(i))
		ans+=s.size();
		s.insert(vec[i]);		
	}
	cout<<ans<<endl;
}