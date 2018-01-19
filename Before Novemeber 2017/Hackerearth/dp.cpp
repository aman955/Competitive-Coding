#include<iostream>
using namespace std;

int dp[1000005]={};

long long recur(long long x)
{
	if(x<=1000000)
	return dp[x];
	
	else 
	return max(x,recur(x/2)+recur(x/3)+recur(x/4));
}


int main()
{
	dp[0]=0;
	dp[1]=1;
	dp[2]=2;
	dp[3]=3;
	for(int i=3;i<=1000000;i++)
	{
		dp[i]=max(i,dp[i/2]+dp[i/3]+dp[i/4]);
	}
	
long long n;
	while(scanf("%lld",&n)!=EOF)
	{
	
		long long ans=recur(n);
		cout<<ans<<endl;
	}
}
