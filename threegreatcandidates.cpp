#include <bits/stdc++.h>

using namespace std;

bool comp(const int& i, const int &j)
{
	return i>j;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> vec(n);
		vector<int> res(3,0);
		int temp=INT_MIN;
		for(int i=0;i<n;++i)
			cin>>vec[i];

		sort(vec.begin(),vec.end(),comp);
		res[0]=vec[0];
		int temp1=vec[1]*vec[2];
		int temp2=vec[vec.size()-1]*vec[vec.size()-2];
		if(temp1>temp2)
			res[1]=vec[1],res[2]=vec[2];
		else
			res[1]=vec[vec.size()-2],res[2]=vec[vec.size()-1];
		cout<<res[0]*res[1]*res[2]<<endl;
		
		
	}
}