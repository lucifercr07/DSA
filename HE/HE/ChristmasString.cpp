#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	
	int n;
	cin>>s>>n;
	
	int starpos1=s.find("*");
	vector<string> vec(n);
	
	for(int i=0;i<n;++i)
		cin>>vec[i];
	vector<int> vec1(n,0);
	//for(int i=0;i<n;++i)
	//	cout<<vec[i]<<" ";

	for(int i=0;i<n;++i)
	{
		int max=0,temp=0;
		for(int j=0;j<s.length();++j)
		{
			if(vec[i][j]!=s[j] && j!=starpos1)
				vec1[j]++;
		}
	}
	
	//for(int i=0;i<n;++i)
	//	cout<<vec1[i]<<" ";
	cout<<distance(vec1.begin(),max_element(vec1.begin(),vec1.end()))+1<<endl;
}