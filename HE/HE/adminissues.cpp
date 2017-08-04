#include <bits/stdc++.h>

using namespace std;

struct comp
{
	template<class T>
	bool operator()(T const& a, T const& b){return a<b;}
};

int main()
{
	int n,q;
	cin>>n>>q;
	int total_time=INT_MAX,finished=INT_MAX,count=1,i;
	for(i=0;i<n;i++)
	{
		vector<int> vec(q);
		for(int j=0;j<q;j++)
			cin>>vec[j];
		sort(vec.begin(),vec.end(),comp());
		int temp1=0,temp2=0;
		temp1=vec[q-1]-vec[0];
		temp2=vec[q-1];
		if(temp1<total_time)
		{
			count=i+1;
			total_time=temp1;
			finished=temp2;
		}
		if(temp1==total_time)
		{
			if(temp2<finished)
			{
				count=i+1;
				total_time=temp1;
				finished=temp2;		
			}
		}
		vec.clear();
	}
	cout<<count<<endl;
}