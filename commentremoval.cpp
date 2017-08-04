#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string line;
		getline(cin,line);
		int found=line.find("//");
		int found1;
		int found2=line.find("/*");
		int found3;
		if(found!=-1)
		{
			for(int i=found+1;i<line.length();i++)
			{
				if(line[i]=='\\'&&line[i+1]=='n')
				{
					found1=i+1;
					break;
				}
			}
			int diff = found1-found;
			line.erase(found,diff+1);
			cout<<line<<endl;
		}
		if(found2!=-1)
		{
			for(int i=found2+1;i<line.length();i++)
			{
				if(line[i]=='*'&&line[i+1]=='/')
				{
					found3=i+1;
					break;
				}
			}
			int diff = found3 -found2;
			line.erase(found2,diff+1);
			cout<<line<<endl;
		}
		if(found==-1&&found2==-1)
			cout<<line<<endl;
	}
}