#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	if(n==1)
	{
		cin>>n;
		cout<<"0";
		return 0;
	}
	long max=0;
	long arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=1;i<n;i++)
	{
		if(arr[i]>arr[max])
		{
			max=i;
		}
	}
	long sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+(arr[max]-arr[i]);
	}
	cout<<sum;
}
