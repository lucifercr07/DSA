
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<queue>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		priority_queue<int> pq;
		for(int i=0;i<n;i++)
		{
			int temp;
			cin>>temp;
			pq.push(temp);
		}

		int num1=INT_MIN;
		int num2=INT_MIN;
		while(pq.size()>=2)
		{
			int temp=pq.top();
			pq.pop();
			int temp2=pq.top();
			if(temp==temp2)
			{
				num1=temp;
				pq.pop();
				break;
			}
		}
		if(num1!=INT_MIN)
		{
				while(pq.size()>=2)
				{
					int temp=pq.top();
					pq.pop();
					int temp2=pq.top();
					if(temp==temp2)
					{
						num2=temp;
						pq.pop();
						break;
					}
				}
		}
		
		//cout<<num1<<" "<<num2<<endl;
		if(num1==INT_MIN ||num2==INT_MIN)
		cout<<"-1"<<endl;
		else
		cout<<num1*num2<<endl;
	}
}	
			
		
		
		
		
		
		
		
		
		
