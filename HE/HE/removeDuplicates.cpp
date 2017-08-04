#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int> vec(26,0);
    int i=0;
    while(i<s.length())
    {
    	vec[s[i]-'a']++;
    	if(vec[s[i]-'a']>1)
    	{
    		s.erase(i,1);
            i--;
    	}
    	i++;
    }
    cout<<s<<endl;
    return 0;
}
