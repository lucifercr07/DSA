#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		string ans="YES";
		if(s.length()==1)
			cout<<ans<<endl;
		else
		{	
			for(int i=0;i<s.length()-1;i++)
			{
				int check1=s[i];
				int check2=s[i+1];
				int diff=abs(check1-check2);
				if(diff==1||(26-diff)==1)
					ans="YES";
				else
				{
					ans="NO";
					break;
				}
			}
			cout<<ans<<endl;
		}
	}
}
