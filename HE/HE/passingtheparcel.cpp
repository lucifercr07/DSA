#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	vector<int> vec(n);
	for(int i=0;i<n;i++)
		vec[i]=i+1;

	int i=0,j=0;
	while(vec.size()!=1)
	{
		if(s[i]=='b')
		{
			vec.erase(vec.begin()+j);
			/*for(int i=0;i<vec.size();i++)
				cout<<vec[i]<<" ";
			cout<<endl;*/
		}
		if(s[i]=='a')
		{
			j++;
		}
		i++;
		if(i>s.length()-1)
			i=0;
		if(j>vec.size()-1)
			j=0;
	}
	cout<<vec[0]<<endl;
}