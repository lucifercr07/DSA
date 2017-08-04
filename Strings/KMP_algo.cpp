#include <bits/stdc++.h>

using namespace std;

void completeLps(char* pat, int len_pat, int* lps);
void KMPSearch(char* pat,char* txt)
{
	int len_pat = strlen(pat);
	int len_txt = strlen(txt);

	int* lps = (int*)malloc(len_pat*sizeof(int));

	completeLps(pat,len_pat,lps);

	int i=0,j=0;

	while(i<len_txt)
	{
		if(pat[j]==txt[i])
		{
			j++;
			i++;
			cout<<"A"<<endl;
		}
		if(j==len_pat)
		{
			cout<<"Match found at: "<<(i-j)<<endl;
			j=lps[j-1];
		}
		else if(i<len_txt && pat[j]!=txt[i])
		{
			if(j!=0)
				j=lps[j-1];
			else
				i++;
		}
	}
	free(lps);
}

void completeLps(char* pat, int len_pat, int* lps)
{
	int j=0,i=1;
	lps[0]=0;

	while(i<len_pat)
	{
		if(pat[i]==pat[j])
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
}

int main()
{
	string text,pattern;
	cin>>text>>pattern;

	char* txt = new char[text.length()+1];
	char* pat = new char[pattern.length()+1];
	
	strcpy(txt,text.c_str());
	strcpy(pat,pattern.c_str());

	KMPSearch(pat,txt);
}