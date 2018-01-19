#include<bits/stdc++.h>
using namespace std;

bool bank(int arr[],int start,int m,int n,int k)
{
	for(int i=start;i<n;i++)
	{
	if(m<0)
	return false;
	if(m==0||arr[i]==k)
	return true;
	else
	{
		if(bank(arr,start+1,m-arr[i],n,k))
		return true;
		else
		return false;
    }
    }
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int arr[n];
		for(int i=0;i<n;i++)cin>>arr[i];
		sort(arr,arr+n);
		if(bank(arr,0,m,n,m))
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
}
