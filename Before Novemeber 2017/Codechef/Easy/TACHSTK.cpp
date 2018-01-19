#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,d;
	cin>>n>>d;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int pairs=0;
	sort(arr,arr+n);
	for(int i=0;i<n-1;i++)
	{
		if(arr[i+1]-arr[i]<=d)
		{
			i++;
			pairs++;
		}
	}
	cout<<pairs;
}
