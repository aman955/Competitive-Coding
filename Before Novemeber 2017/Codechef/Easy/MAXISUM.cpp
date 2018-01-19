#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,k,i;
			cin>>n>>k;
		long long int sum=0,arr[n],brr[n];
	
		for(i=0;i<n;i++)
		cin>>arr[i];
		for(i=0;i<n;i++)cin>>brr[i];
		for(i=0;i<n;i++)sum+=(arr[i]*brr[i]);
		sort(brr,brr+n);
		long long val= max(abs(brr[0]),abs(brr[n-1]));
		long long ans=sum+val*k;
		cout<<ans<<endl;
		
		
		
	}
}
