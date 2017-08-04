#include <bits/stdc++.h>

using namespace std;

int main()
{
	int m,count=0,temp1,temp2;
	cin>>m;
	vector<char> vec(m);
	for(int i=0;i<m;i++)
		cin>>vec[i];
	int boy=0,girlq=0;
	int girls;
	cin>>girls;
	while(girls--)
	{
		vector<char> gq;
		char n;
		while((scanf(" %c",&n)) != '\n')
		{
			gq.push_back(n);
		}

		if(gq.size()>=vec.size())
		{
			for(int i=0;i<vec.size();i++)
			{
				temp1=gq[i],temp2=vec[i];
				boy+=temp2;
				girlq+=temp1;
			}
			if(temp1==temp2)
				count++;
		}
		gq.clear();
	}
}