#include <bits/stdc++.h>

using namespace std;

void computeZArray(string s,int *Z)
{
	int n=s.length();
	int L=0,R=0,K;
	for(int i=1;i<n;i++)
	{
		if(i>R)
		{
			L=R=i;
			while(R<n&&s[R-L]==s[R])
				R++;
			Z[i]=R-L;
			R--;
		}
		else
		{
			K=i-L;
			if(Z[K]<R-i+1)
				Z[i]=Z[K];
			else
			{
				L=i;
				while(R<n&&s[R-L]==s[R])
					R++;
				Z[i]=R-L;
				R--;
			}
		}
	}
	for(int i=0;i<14;i++)
		cout<<Z[i]<<" ";
	cout<<endl;
	
}

int main()	
{
	string text;
	getline(cin,text);
	string pattern;
	cin>>pattern;
	int l=pattern.length()+1+text.length();
	int z[l];
	string s1=pattern+'$'+text;
	computeZArray(s1,z);
	for(int i=1;i<l;i++)
	{
		if(z[i]==pattern.length())
			cout<<"Match found at index: "<<(i-pattern.length()-1)<<endl;
	}
}