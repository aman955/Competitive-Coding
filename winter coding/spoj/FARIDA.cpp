#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int j=1;j<=t;j++)
	{
	
		long long int n,i;
		scanf("%lld",&n);
		long long int arr[n+1]={};
		for(i=1;i<=n;i++)
		{
			scanf("%lld",&arr[i]);
		}
		long long int dp[n+1]={};
		if(n==0)
		{
			printf("Case %d: 0\n",j);
		}
		else if(n==1)
		{
			printf("Case %d: %lld\n",j,arr[1]);
		}
		else
		{
			dp[1]=arr[1];
			dp[2]=max(arr[1],arr[2]);
			for(i=3;i<=n;i++)
			{
				dp[i]=max(dp[i-2]+arr[i],dp[i-1]);
			}
			printf("Case %d: %lld\n",j,dp[n]);
		}
	}
}
