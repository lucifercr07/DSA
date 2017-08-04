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
		set<int> s;
		int count;
		set<int>::iterator it;
		pair<set<int>::iterator,bool> ret;
		for(int i=0;i<(2*n+2);i++)
		{
			int num;
			cin>>num;
			ret=s.insert(num);
			if(ret.second==false)
			{	
				it=ret.first;
				s.erase(it);
			}
		}
		for(it=s.begin();it!=s.end();++it)
			cout<<*it<<" ";
		cout<<endl;
	}
}