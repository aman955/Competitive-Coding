#include<iostream>
using namespace std;

void quicksort(int arr,int low,int high);
void partition(int arr,int low,int high);

void swap(int *a,int *b);

void swap(int *a, int *b)
{
	int t=*a;
	*a = *b;
	*b=t;
}

int partition(int arr[], int low, int high)
{
	int pivot=arr[high];
	int i=low-1;
	
	for(int j=low;j<high;j++)
	{
		if(arr[j]<=pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return (i+1);
}

void quicksort(int arr,int low,int high)
{
	if(low<high)
	{
		int pI = partition(arr, low, high);
		
		quicksort(arr,low, pI-1);
		quicksort(arr, pI+1, high);
	}
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	quicksort(arr,0,n-1);
}
