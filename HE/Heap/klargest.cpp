//K largest in a unsorted array
#include <iostream>

using namespace std;

void heapify(int *arr, int n, int i)
{
	int l=2*i+1;
	int r=2*i+2;

	int largest=i;

	if(l<n && arr[largest]<arr[l])
		largest=l;
	
	if(r<n && arr[largest]<arr[r])
		largest=r;

	if(largest!=i)
	{
		swap(arr[i], arr[largest]);
		heapify(arr,n,largest);
	}

}

void buildHeap(int *arr, int n)
{
	for(int i=(n/2)-1;i>=0;--i)
		heapify(arr,n,i);
}

int extractMax(int *arr,int &n)
{
	int root=arr[0];
	arr[0]=arr[n-1];
	n--;

	heapify(arr,n,0);
	return root;
}

void klargest(int *arr, int n, int k)
{
	buildHeap(arr,n);
	for(int i=0;i<k;++i)
		cout<<extractMax(arr,n)<<" ";
	cout<<endl;
}

int main()
{
	int arr[]={1,23,12,9,30,2,50};
	int k=3;
	int n = sizeof(arr)/sizeof(arr[0]);

	klargest(arr,n,k);
}