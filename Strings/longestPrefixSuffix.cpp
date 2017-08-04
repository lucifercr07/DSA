//In this question we have to find longest prefix suffix for whole string
//not each substring from 0 thus just length-1 will work.

#include <bits/stdc++.h>

using namespace std;

void computeLps(char* word, int n)
{
	vector<int> lps(n);

	int j=0,i=1;

	lps[0]=0;

	while(i<n)
	{
		if(word[i]==word[j])
		{
			j++;
			lps[i]=j;
			i++;
		}
		else
		{
			if(j!=0)
			{
				j=lps[j-1];
			}
			else
			{
				lps[i]=0;
				i++;
			}
		}

	}
	int max=lps[n-1];
	cout<<max<<endl;
	lps.clear();
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int size = s.length();
		char* word = new char[size+1];
		strcpy(word, s.c_str());
		computeLps(word, size);

	}	
}