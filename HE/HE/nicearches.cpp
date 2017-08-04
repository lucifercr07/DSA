#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	static int bubbly=0;
	stack<int> arch;
	while(t--)
	{
		string s;
		cin>>s;
		int a=count(s.begin(),s.end(),'A');
		int b=count(s.begin(),s.end(),'B');
		
		if(a%2==0&&b%2==0)
		{
			while(!arch.empty())
				arch.pop();
			for(int i=0;i<s.length();i++)
			{
				if(arch.empty())
					arch.push(s[i]);
				else
				{
					if(arch.top()==s[i])
						arch.pop();
					else
						arch.push(s[i]);
				}
			}
			if(arch.empty())
				bubbly++;
		}
		
	}
	cout<<bubbly<<endl;
}