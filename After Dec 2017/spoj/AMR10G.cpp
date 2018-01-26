#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		long long int arr[n];
		for(int i=0;i<n;i++)
		scanf("%lld",&arr[i]);
		sort(arr,arr+n);
		long long mini=10000000000;
		
		for(int i=0;i<n-k+1;i++)
		{
			if(mini>arr[i+k-1]-arr[i])
			mini=arr[i+k-1]-arr[i];
		}
		cout<<mini<<endl;
	}
}
