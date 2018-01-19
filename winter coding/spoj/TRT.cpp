#include<bits/stdc++.h>
using namespace std;

long long int dp[2002][2002]={};

int main()
{
	long long int n,i,k;
	cin>>n;
	long long int arr[n+1]={};
	for(i=1;i<=n;i++)
	{
	cin>>arr[i];
	dp[i][i]=arr[i]*n;
    }
	for(k=2;k<=n;k++)
	{
		for(i=1;i<=n-k+1;i++)
		{
			dp[i][i+k-1]=max(dp[i][i+k-2]+arr[i+k-1]*(n-k+1) ,dp[i+1][i+k-1]+arr[i]*(n-k+1));
		}
	}
	cout<<dp[1][n]<<endl;
}
