#include <bits/stdc++.h>

using namespace std;

class MinHeap{
	int *harr;
	int heapSize;
	int capacity;
public:
	MinHeap(int capacity){
		heapSize=0;
		this->capacity=capacity;
		harr=new int[capacity];
	}

	int getMin(){
		return harr[0];
	}

	void heapify(int start);
	int extractMin();
	void decreaseKey(int idx, int nkey);
	void insert(int key);
	void deleteKey(int key);
};

int MinHeap::extractMin(){
	if(heapSize<=0)
		return INT_MAX;

	if(heapSize==1)
	{
		heapSize--;
		return harr[0];
	}

	int min = getMin();
	harr[0] = harr[heapSize-1];
	heapSize--;
	heapify(0);
	return min;
}

void MinHeap::heapify(int i){
	int l=(2*i)+1;
	int r=(2*i)+2;

	int smallest=i;
	if(l<heapSize && harr[l]<harr[smallest])
		smallest=l;
	if(r<heapSize && harr[r]<harr[smallest])
		smallest=r;

	if(smallest!=i)
	{
		swap(harr[i],harr[smallest]);
		heapify(smallest);
	}
}

void MinHeap::decreaseKey(int idx, int nkey)
{
	harr[idx]=nkey;
	int i=idx;
	while(i!=0 && harr[(i-1)/2]>harr[i]){
		swap(harr[i],harr[(i-1)/2]);
		i=(i-1)/2;
	}
}

void MinHeap::deleteKey(int idx){
	decreaseKey(idx,INT_MIN);
	extractMin();
}

void MinHeap::insert(int key){
	if(heapSize==capacity)
	{
		cout<<"Overflow"<<endl;
		return;
	}

	heapSize++;
	int i=heapSize-1;
	harr[i]=key;

	while(i!=0 && harr[(i-1)/2]>harr[i])
	{
		swap(harr[i],harr[(i-1)/2]);
		i=(i-1)/2;
	}

}

int main()
{
    MinHeap h(11);
    h.insert(3);
    h.insert(2);
    h.deleteKey(1);
    h.insert(15);
    h.insert(5);
    h.insert(4);
    h.insert(45);
    cout << h.extractMin() << " ";
    cout << h.getMin() << " ";
    h.decreaseKey(2, 1);
    cout << h.getMin();
    
    return 0;
}