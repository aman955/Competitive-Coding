#include<iostream>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long i,arr[n+1],brr[n+1];
		long long ans=0;
	
		for(i=1;i<=n;i++)
		{
			arr[i]=i*n-(i-1)*(i-1)-(i-1);
		}
	
		for(i=1;i<=n;i++)cin>>brr[i];
		for(i=1;i<=n;i++)
		{
			if(arr[i]%2==1)
			ans=(ans^brr[i]);
		}
		cout<<ans<<endl;
	}
	
}
