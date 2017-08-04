#include <bits/stdc++.h>
#include <functional>

using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<long> vec;
	vector<string> vec1;
	long count[10000];
	int j=0;
	while(n--)
	{
		string s;
		cin>>s;
		vec1.push_back(s);
		long total=0;
		vec.push_back(total);
	}
	for(int i=0;i<vec.size();i++)
	{
		count[vec[i]]++;
		if(count[vec[i]]>1)
		{
			int length=vec1[i].length();
			cout<<length<<" "<<vec1[i][length/2]<<endl;
		}
	}	
}