#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,q;
	cin>>n>>q;
	int *arr=(int*)malloc(n*sizeof(int));
	for(int i=1;i<=n;i++)	
		cin>>arr[i];
	while(q--)
	{
		int x;
		cin>>x;
		if(x==0)
		{
			int first_index,second_index;
			cin>>first_index>>second_index;
			if(arr[second_index]==1)
				cout<<"Odd"<<endl;
			else
				cout<<"Even"<<endl;
		}
		else if(x==1)
		{
			int index;
			cin>>index;
			arr[index]=!arr[index];
		}
	}
}