#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int num;
		cin>>num;
		if(num%21==0)
			cout<<"The streak is broken!"<<endl;
		else
		{
			string s=to_string(num);
			int found = s.find("21");
			if(found==string::npos)
				cout<<"The streak is still live in our hearts!"<<endl;
			else
				cout<<"The streak is broken!"<<endl;	
		}
	}
}