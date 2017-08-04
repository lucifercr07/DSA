//A sorted array A[ ] with distinct elements is rotated at some unknown point,
//the task is to find the minimum element in it. In O(Logn) time.

#include <bits/stdc++.h>

using namespace std;

int search(vector<int> &vec)
{
	int low=0,high=vec.size()-1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(vec[mid]<vec[mid-1]&&vec[mid]<vec[mid+1])
			return mid;
		if(vec[mid]>vec[mid-1]&&vec[mid]>vec[mid+1])
			return mid+1;
		else if(vec[mid]>vec[high])
			low=mid+1;
		else if(vec[mid]<vec[high])
			high=mid-1;
	}
}

int main()
{
	clock_t tStart = clock();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> vec(n);

		for(int i=0;i<n;++i)
			cin>>vec[i];

		int idx=search(vec);
		cout<<vec[idx]<<endl;
	}
	printf("Time taken: %.3fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
}