#include<iostream>
using namespace std;
void swap(int *a,int *b);

int main()
{
	int n;
	cin>>n;
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int pivot=arr[0];
	i=n;
	for(int j=n-1;j>=0;j--)
	{
		if(arr[j]>=pivot)
		{
			i--;
			swap(&arr[j],&arr[i]);
		}
	}
	swap(&arr[0],&arr[i-1]);
	
	for(i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
