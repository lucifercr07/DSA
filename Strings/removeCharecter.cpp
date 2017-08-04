//Remove charecter GFG

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;

		for(int i=0;i<s2.length();++i)
		{
			int pos=s1.find(s2[i]);
			while(pos!=string::npos)
			{
				s1.erase(pos,1);
				pos=s1.find(s2[i]);
			}
		}
		cout<<s1<<endl;
	}
}