#include <bits/stdc++.h>

using namespace std;

int isPrime(int num)
{
	int temp=num;
	while(num%2==0)
	{
		num=num/2;
	}
	for(int i=3;i<=sqrt(num);i+=2)
	{
		while(num%i==0)
		{
			if(i==3||i==5)
				num=num/i;
			if(i!=3 && i!=5)
				return -1;
		}	
	}
	if(num>2)
	{
		if(num==3||num==5)
			return 1;
		else
			return -1;
	}
	return 1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int num;
		cin>>num;
		int ans=0,count=0,i=0;
		while(count!=num)
		{
			i++;
			//cout<<i<<endl;
			int temp=isPrime(i);
			//cout<<"temp: "<<temp<<" ";
			if(temp!=-1)
			{
				cout<<i<<" ";
				count++;
			}
		}
		//cout<<ans<<endl;
	}	
}