#include<iostream>
using namespace std;

int main()
{
	int n,k,i;
	cin>>n>>k;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int count=0;
	for(i=1;i<n;i++)
	{
		if(arr[i]+arr[i-1]<k)
		{
			count+=k-arr[i]-arr[i-1];
			arr[i]=k-arr[i-1];
		}
	}
	cout<<count<<endl;
	for(i=0;i<n;i++)cout<<arr[i]<<" ";
}
