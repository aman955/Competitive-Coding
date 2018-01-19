#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i,arr[n];
	for(i=0;i<n;i++)cin>>arr[i];
	long long int min=1000000000000000;
	sort(arr, arr+n);

	for(i=0;i<n-1;i++)
	{
		if(abs(arr[i]-arr[i+1])<min)
		{
			min=abs(arr[i]-arr[i+1]);
		}
	}
	cout<<min<<endl;
	for(i=0;i<n-1;i++)
	{
		if(abs(arr[i]-arr[i+1])==min)
		{
			cout<<arr[i]<<" "<<arr[i+1]<<" "; 
		}
	}
}
