#include<iostream>
using namespace std;

int main()
{
	long long i,j;
	
	long long int n,m;
	cin>>n>>m;
	long long int arr[n]={};
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	i=j=0;
	long long sum=0,max=0;
	while(i<n)
	{
		while(sum<=m&&j<n)
		{
			if(max<sum)
			max=sum;
			sum+=arr[j];
			j++;
		}
			if(max<sum&&sum<=m)
			max=sum;
		
		sum=sum-arr[i];
		i++;
		
	}
	cout<<max<<endl;

}
