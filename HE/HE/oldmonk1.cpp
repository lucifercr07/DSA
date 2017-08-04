#include <iostream>
#include <vector>
using namespace std;

long long binarySearch(vector<long long> &v2,long long low,long long high,long long key)
{
		long long mid=(low+high)/2;
		long long p=0;
		while(low<=high)
		{	
			
			if(v2[mid]>=key)
			{
				low=mid+1;
				p= mid;
			}
			if(v2[mid]<key)
				binarySearch(v2,low,mid-1,key);
			else
			p=-1;

		}
		return p;
}

int main()
{
	
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		std::vector<long long> v1(n),v2(n);
		for(long long i=0;i<n;i++)
			cin>>v1[i];
		for(long long i=0;i<n;i++)
			cin>>v2[i];

		long long i=0,max=0;
		while(i<n)
		{
			long long index=binarySearch(v2,0,v2.size(),v1[i]);
			cout<<index<<endl;
			if(index==-1)
			{
				cout<<"0"<<endl;
				break;
			}
			else
			{
				long long temp=0;
				temp=index-i;
				if(temp>max)
					max=temp;
			}
			i++;
		}
		cout<<max<<endl;
	}
}