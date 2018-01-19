#include<iostream>
using namespace std;

int main()
{
	int n,k,i,j;
	cin>>n>>k;
	int arr[n+1];
	for(i=1;i<=n;i++)
	{
		cin>>arr[i];
	}

	int min=1;
	
	int sum;
	for(i=1;i<=k;i++)
	{
		sum+=arr[i];
	}
	int sum1,minsum=sum;
	for(i=2;i<=n-k+1;i++)
	{
		sum=sum+arr[i+k-1]-arr[i-1];
		if(sum<minsum)
		{
			minsum=sum;;
			min=i;
		}
	}
	cout<<min;
}
