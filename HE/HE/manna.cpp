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
		int suvo=0,suvojit=0,found;
		do
		{
			found=s.find("SUVO");
			if(found!=string::npos)
			{
				
				if(s[found+4]=='J'&&s[found+5]=='I'&&s[found+6]=='T')
				{
					
					suvojit++;
					s.erase(found,7);
					//cout<<s<<endl;
				}	
				else
				{
					s.erase(found,4);
					//cout<<s<<endl;
					suvo++;
					
				}
			}
		}while(found!=string::npos);
		
		cout<<"SUVO = "<<suvo<<", SUVOJIT = "<<suvojit<<endl;
	}
}