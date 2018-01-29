#include<bits/stdc++.h>
using namespace std;



int main()
{

	int t,p=1;;
	cin>>t;
	while(t--)
	{
		int n,m,i,j;
		cin>>n>>m;
		int dp[n][2000]={};
		int val[n],val2[m];
		for(i=0;i<n;i++)
		{
			cin>>val[i];
		}
		for(i=0;i<m;i++)
		{
			cin>>val2[i];
		}
		for(i=0;i<2000;i++)
		dp[0][i]=1;
		
		for(i=1;i<n;i++)
		{
			for(j=0;j<70;j++)
			{
				dp[i][j]=dp[i-1][j]+dp[i][j^val[i]];
			}
		}
		for(i=0;i<=20;i++)
		{
			for(j=0;j<=20;j++)
			cout<<dp[i][j]<< " ";
			cout<<endl;
		}
	}
}
