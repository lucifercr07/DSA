#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,n;
	cin>>n;
	std::vector<string> v;
	std::vector<string> v2;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		v.push_back(s);
		v2.push_back(s);
	}
	for(int i=0;i<v2.size();i++)
	{
		reverse(v[i].begin(),v[i].end());
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=j && v[i]==v2[j])
			{
				cout<<v[i].size()<<" "<<v[i][v[i].size()/2]<<endl;
				break;
			}

		}
	}
	
	
	return 0;
}