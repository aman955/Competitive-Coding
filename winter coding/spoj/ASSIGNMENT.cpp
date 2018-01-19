#include<bits/stdc++.h>
using namespace std;

long long cost[1000][1000]={};
long long dp[300005]={};

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
	dp[i]=INT_MAX;
	dp[0]=0;

	for(long long mask=0;mask<pow(2,n);mask++)
	{
		long long x=count_set(mask); 
		for(j=0;j<n;j++)
		{

			if(!(mask&(1<<j)))
			{
				dp[mask|(1<<j)]=min(dp[mask|(1<<j)],(dp[mask]+cost[x][j]));
				/*cout<<"dp["<<mask<<"|"<<(1<<j)<<"] = min(dp["<<mask<<"]*/
			}
		}
	}
	long long y=pow(2,n)-1;
	return (dp[y]);
}
/* 2 3 4 10 12*/


int main()
{
	long long i,n,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cin>>cost[i][j];
	}

	cout<<func(n)<<endl;

	
}
