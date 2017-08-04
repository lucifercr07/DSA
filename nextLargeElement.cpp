#include <bits/stdc++.h>
using namespace std;


int main() 
{
	//code
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> vec;
		for(int i=0;i<n;i++)
		{
		    int x;
		    cin>>x;
		    vec.push_back(x);
		}
		
		for(int i=0;i<n;i++)
		{
			int num=vec[i],flag=0;
			for(int j=i+1;j<n;j++)
			{
				if(vec[j]>vec[i])
				{
					cout<<vec[j]<<" ";
					flag=1;
					break;
				}
				
			}
			if(flag==0)
			cout<<"-1"<<" ";
		}
		cout<<endl;
	}
	return 0;
}
