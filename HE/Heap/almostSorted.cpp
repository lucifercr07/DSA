#include <bits/stdc++.h>

using namespace std;

void minHeapify(int *harr, int n, int i)
{
	int l=2*i+1;
	int r=2*i+2;

	int smallest=i;
	
	if(l<n && harr[smallest]>harr[l])
		smallest=l;
	if(r<n && harr[smallest]>harr[r])
		smallest=r;

	if(smallest!=i)
	{
		swap(harr[i],harr[smallest]);
		minHeapify(harr,n,smallest);
	}
}

int replaceMin(int *harr,int arrElement, int n)
{
	int root=harr[0];
	harr[0] = arrElement;

	minHeapify(harr,n,0);
	return root;
}

int extractmin(int *harr,int &n)
{
	int root=harr[0];
	harr[0]=harr[n-1];
	n--;

	minHeapify(harr,n,0);
	return root;
}

int sortk(int *arr, int n, int k)
{
	int *harr=new int[k+1];
	for(int i=0;i<n && i<=k;++i)
		harr[i]=arr[i];
	minHeapify(harr,n,0);

	int x=k+1;
	for(int i=k+1,t=0;t<n;t++,i++)
	{
		if(i<n)
		{
			arr[t]=replaceMin(harr, arr[i], k+1);
		}
		else
		{
			arr[t]=extractmin(harr,x);
		}
	}
}

int main()
{
	int k = 3;
    int arr[] = {2, 6, 3, 12, 56, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    sortk(arr, n, k);
	for(int i=0;i<n;++i)
		cout<<arr[i]<<" ";
	cout<<endl;
}