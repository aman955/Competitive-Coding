#include<iostream>
using namespace std;

int main()
{
	int t,i;
	long n,sum;
	cin>>t;
	int arr[]={220,284,1184,1210,2620,2924,5020,5564,6232,6368,10744, 10856,12285,14595,17296,18416,63020,66928,66992,67095, 69615,71145,76084,79750,87633,88730};
	while(t--)
	{
		cin>>n;
		sum=0;
		i=0;
		while(arr[i]<n)
		{
			sum=sum+arr[i];
			i++;
			
		}
		cout<<sum<<endl;
	
	}
}
