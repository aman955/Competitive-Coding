#include<iostream>
using namespace std;

long long int inf=999999999,dp[100000],val[100000]={},wei[100000]={};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		int e,f;
		cin>>e>>f;
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>val[i]>>wei[i];
		}
		int cnt=0;
		int wt=f-e;
		for(int i=0;i<=wt;i++)
		{
			dp[i]=inf;
		}
		dp[0]=0;
		
		for(int i=1;i<=wt;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(wei[j]<=i)
				{
					dp[i]=min(dp[i],dp[i-wei[j]]+val[j]);
				}
			
			}
		}
		if(dp[wt]<inf)
		 {
            cout<<"The minimum amount of money in the piggy-bank is "<<dp[wt]<<"."<<endl;
        } else
            cout<<"This is impossible."<<endl;
	}
}

