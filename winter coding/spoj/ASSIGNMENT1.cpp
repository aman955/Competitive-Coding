#include<bits/stdc++.h>
using namespace std;

int cost[50][50]={};
long long dp[3000005]={};
long long ways=0;
long long count_set(long long n)
{
	long long count=0;
while(n)
{
	n=n&(n-1);
	count++;
}
return count;	
}

long long func(long long n)
{
	long long i,j;

	for(i=0;i<=pow(2,n);i++)
	dp[i]=0;
	dp[0]=1;

	for(long long mask=1;mask<pow(2,n);mask++)
	{
		long long x=count_set(mask); 
		for(j=0;j<n;j++)
		{
		
			if(cost[x-1][j]&&((mask&(1<<j))))
			{
				dp[mask]=dp[mask]+dp[mask & ~(1<<j)];
			}
		}
	}
	long long y=pow(2,n)-1;
	return (dp[y]);
}



int main()
{
	long long i,n,j,t;
	cin>>t;
	while(t--)
	{
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cin>>cost[i][j];
	}
	
	cout<<func(n)<<endl;
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cost[i][j]=0;
	}
	for(i=0;i<=n;i++)dp[i]=0;
    }

	
}

/*
1 0 0 1 0 0 0 0 0 1  
1 1 1 1 1 0 1 0 1 0  
1 0 0 1 0 0 1 1 0 1  
1 0 1 1 1 0 1 1 0 1  
0 1 1 1 0 1 0 0 1 1  
1 1 1 0 0 1 0 0 0 0  
0 0 0 0 1 0 1 0 0 0  
1 0 1 1 0 0 0 0 0 0  
0 0 1 0 1 1 0 0 0 1  
1 1 1 0 0 0 1 0 1 0  
 
*/
