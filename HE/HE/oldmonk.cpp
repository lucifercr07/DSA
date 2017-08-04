#include <iostream>
#include <vector>

using namespace std;

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

		long long start1=0,start2=0;
		long long max=0;
		while(start1<n)
		{
			long long temp=0;
			if(v1[start1]<=v2[start2]&&start2>=start1&&start2<n)
			{
				temp=start2-start1;
				//cout<<v1[start1]<<" "<<v2[start2]<<endl;
				//cout<<start2<<" "<<start1<<endl;
				//cout<<endl;
				if(temp>max)
					max=temp;
				start2++;
			}
			else
			{
				start1++;
				start2=start1;
			}
		}
		cout<<max<<endl;
	}
}