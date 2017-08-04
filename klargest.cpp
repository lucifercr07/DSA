#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> vec(n);
		for(int i=0;i<n;i++)
		{
	    	cin>>vec[i];
		}
		sort(vec.begin(),vec.end());
		int k;
		cin>>k;
		k=k-1;
		while(k--)
		{
	    	vector<int>::iterator it=min_element(vec.begin(),vec.end());
	    	vec.erase(it);
		}
		cout<<*min_element(vec.begin(),vec.end())<<endl;
	}
	return 0;
}
