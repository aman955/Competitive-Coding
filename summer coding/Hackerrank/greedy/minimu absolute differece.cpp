#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i,arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	long long int mini=1000000000000000;
	for(i=0;i<n-1;i++)
	{
		if(abs(arr[i]-arr[i+1])<mini)
		mini = abs(arr[i]-arr[i+1]);
	}
	cout<<mini;
}
