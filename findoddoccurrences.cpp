#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int *arr=(int*)malloc(sizeof(int)*n);
	
	for(int i=0;i<n;++i)
		cin>>arr[i];
	int x=0;
	for(int i=0;i<n;++i)
		x=x^arr[i];
	cout<<x<<endl;
	

}