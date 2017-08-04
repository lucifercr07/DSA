#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='B'&&s[i+2]!='B')
			{
				s[i-2]='0';
				s[i-1]='0';
				s[i+1]='0';
				s[i+2]='0';
			}
			if(s[i]=='B'&&s[i+2]=='B')
			{
				if(s[i-2]!='B')
					s[i-2]='0';
				s[i-1]='0';
				s[i+1]='0';
			}

		}
		cout<<s<<endl;
		int num = count(s.begin(),s.end(),'0');	
		cout<<num<<endl;
	}	
}