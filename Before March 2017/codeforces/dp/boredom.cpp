#include<iostream>
#define MAX 100005
using namespace std;
long long count[MAX]={};

int main()
{
	int n,x,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		count[x]++;
	}
	long long dp[MAX];
	dp[1]=count[1];
	dp[0]=0;
	for(i=2;i<MAX;i++)
	{
		dp[i]=max(dp[i-1],dp[i-2]+i*count[i]);
	}
	cout<<dp[MAX-1];
	
}
