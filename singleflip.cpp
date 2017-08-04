//Given a binary string, 
//find if it is possible to make all its digits equal (either all 0’s or all 1’s) by flipping exactly one bit.

#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	int n =s.length();
	int zero=0,one=0;
	for(int i=0;i<n;++i)
	{
		(s[i]=='0')?zero++:one++;
	}

	(zero==1||one==1)?cout<<"Yes"<<endl:cout<<"No"<<endl;

}