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
		string res;
		for(int i=0;i<s.length();++i)
		{
			if(s[i]=='#')
				res+='#';
			else if(s[i]=='*')
				res+='*';
			else
			{	
				char s1=s[i];
				s1=tolower(s1);
				int x=s1-'a';
				if(x>=0&&x<=2)
					res+='2';
				else if(x>=3&&x<=5)
					res+='3';
				else if(x>=6&&x<=8)
					res+='4';
				else if(x>=9&&x<=11)
					res+='5';
				else if(x>=12&&x<=14)
					res+='6';
				else if(x>=15&&x<=18)
					res+='7';
				else if(x>=19&&x<=21)
					res+='8';
				else if(x>=22&&x<=25)
					res+='9';
			}
		}
		cout<<res<<endl;
	}
}