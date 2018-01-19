#include<iostream>
using namespace std;

void max_heapify(int arr[],int i,int n)
{
	int left=2*i;
	int right=2*i+1;
	int largest;
	if(left<=n&&arr[left]>arr[i])
	largest=left;
	else
	largest=i;
	
	if(right<=n&&arr[right]>arr[largest])
	largest=right;
	if(i!=largest)
	{
		swap(arr[i],arr[largest]);
		max_heapify(arr,largest,n);
	}
}

void build_heap(int arr[],int n)
{
	for(int i=n/2;i>0;i--)
	{
			max_heapify(arr,i,n);
	}
}

void heap_sort(int arr[],int n)
{
	int i,heap_size=n;
	build_heap(arr,n);
	for(i=n;i>1;i--)
	{
		swap(arr[1],arr[i]);
		heap_size=heap_size-1;
		max_heapify(arr,1,heap_size);
	}
	
}

int main()
{
	int n;
	cin>>n;
	int i,arr[n+1];
	for(i=1;i<=n;i++)cin>>arr[i];
	heap_sort(arr,n);
	for(i=1;i<=n;i++)cout<<arr[i]<<" ";
}
