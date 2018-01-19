#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int i;
	int arr[m],diff=100000;
	for(i=0;i<m;i++)
	cin>>arr[i];
	sort(arr,arr+m);
	for(i=0;i<=m-n;i++)
	{
		if(arr[i+n-1]-arr[i]<diff)
		diff=arr[i+n-1]-arr[i];
	}
	cout<<diff;
	
}
