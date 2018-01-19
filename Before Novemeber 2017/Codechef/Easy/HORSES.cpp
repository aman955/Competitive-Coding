#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t,i;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long arr[n];
		for(i=0;i<n;i++)
		cin>>arr[i];
		sort(arr,arr+n);
		long long min= 10000000000;
		for(i=0;i<n-1;i++)
		{
			if(arr[i+1]-arr[i]<min)
			min=arr[i+1]-arr[i];
					}
					cout<<min<<endl;
	}
}
