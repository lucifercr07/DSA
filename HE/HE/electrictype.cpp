#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> vec(n);
	for(int i=0;i<n;i++)
		cin>>vec[i];

	multimap<int, int> m;
	multimap<int, int>::iterator it;


	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		{
			m.insert(pair<int, int>(vec[i],vec[j]));
		}

	/*for(it=m.begin();it!=m.end();++it)
		cout<<it->first<<" "<<it->second<<endl;
	*/
	//cout<<endl;
	/*if(m.size()>1)
	{
		auto prev_key=m.begin()->first;
		auto prev_key2=m.begin()->second;
		//auto it=m.begin();
		for(auto it=m.begin()+1;it!=m.end();)
		{
			if(it->first==prev_key&&it->second==prev_key2)
			{
				m.erase(it);
			}
			else
			{
				prev_key=it->first;
				prev_key2=it->second;
				++it;
			}	
		}
	}*/
	multimap<int,int> maps;
	while(m.size()>0)
	{
		auto item=m.begin();
		maps.insert(make_pair(item->first,item->second));
		for(it=m.begin();it!=m.end();++it)
		{
			if(it->first==item->first&&it->second==item->second)
				m.erase(it);
		}

	}
	/*for(it=maps.begin();it!=maps.end();++it)
		cout<<it->first<<" "<<it->second<<endl;		
	*/
		cout<<maps.size()<<endl;

}