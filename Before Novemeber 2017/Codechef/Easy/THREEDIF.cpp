#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int arr[3];
		cin>>arr[0]>>arr[1]>>arr[2];
		sort(arr,arr+3);
		int a=arr[0],b=arr[1],c=arr[2];
		long long ans;
		a=a%mod;
		b=(b-1)%mod;
		c=(c-2)%mod;
		ans=((a*b)%mod);
		ans= (c*ans)%mod;
		cout<<ans<<endl;
	}
}

