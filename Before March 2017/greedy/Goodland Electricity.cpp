#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,k,i;
	cin>>n>>k;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	sort(arr,arr+n);
	i=0;
	int location,count=0;
	while(i<n)
	{
		count++;
	location=arr[i]+k;
	while(i<n&&arr[i]<=location)
	i++;
	i--;
	location=arr[i]+k;
	while(i<n&&arr[i]<=location)
	i++;
	}
	cout<<count;
}
