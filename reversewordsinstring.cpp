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
		vector<string> vec;
		string s1;
		for(int i=0;i<s.length();)
		{
			if(s[i]!='.')
			{
				while(s[i]!='.'&&i<s.length())
				{
					s1+=s[i];
					i++;
				}
				vec.push_back(s1);
			}
			else
			{
				//cout<<s1<<endl;
				i++;
				s1.clear();
			}
		}
		/*vector<string>::reverse_iterator rit;
		for(rit=vec.rbegin();rit!=vec.rend();++rit)
		{
			if(rit==vec.rend()-1)
				cout<<*rit<<endl;
			else
				cout<<*rit<<".";
		}*/
		//Using reverse iterator takes more time(0.119 sec) so simple traversal is better(0.054 sec)
		for(int i=vec.size()-1;i>=0;i--)
		{
			if(i==0)
				cout<<vec[i]<<endl;
			else
				cout<<vec[i]<<".";
		}
	}
}