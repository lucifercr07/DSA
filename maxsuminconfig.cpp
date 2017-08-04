#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,n;
	cin>>t>>n;
	int max=0;
	while(t--)
	{

		vector<int> vec(n);
		for(int i=0;i<n;i++)
			cin>>vec[i];

		int count=0;
		while(count<n)
		{	
			int temp=0;
			int s=vec.front();
			
			vec.erase(vec.begin());
			vec.push_back(s);
			
			for(int i=0;i<vec.size();i++)
				temp+=(vec[i]*i);

			//cout<<temp<<endl;
			if(temp>max)
				max=temp;

			count++;
		}
	
		cout<<max<<endl;
	}	
}