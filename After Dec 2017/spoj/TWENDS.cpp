#include<bits/stdc++.h>
using namespace std;

int n;
int arr[1001];
int dp[1001][1001];

long long func(int a,int b)
{
	if(dp[a][b])
	return dp[a][b];
	if(a==b-1)
	return max(arr[a],arr[b]);
	long long val1=0,val2=0;
	(arr[a+1]>=arr[b])?(val1=func(a+2,b)+arr[a]):(val1=func(a+1,b-1)+arr[a]);
	(arr[a]>=arr[b-1])?(val2=func(a+1,b-1)+arr[b]):(val2=func(a,b-2)+arr[b]);
	dp[a][b]=max(val1,val2);
	return dp[a][b];
	
}

int main()
{
	int n,i,tc=1;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
		return 0;
		memset(dp,0,sizeof(dp));
		long long sum=0;
		for(i=1;i<=n;i++)
		{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	    }
		long long ans=2*func(1,n)-sum;
		printf("In game %d, the greedy strategy might lose by as many as %lld points.\n",tc,ans);
		tc++;
	}
}
