#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,k,i,j;
	cin>>n>>k;
	int t[k+1][n+1],pr[k],coins[k+1][n+1];
	for(i=1;i<=k;i++)
	cin>>pr[i];
	for(i=0;i<n+1;i++)
	{
		t[0][i]=10000;
		coins[0][i]=0;
	}
	for(i=0;i<k+1;i++)
	{
		t[i][0]=0;
		coins[i][0]=0;
	}
	int temp=1;
	
	for(i=1;i<=k;i++)
	{
		if(pr[i]!=-1)
	  {
		for(j=1;j<=n;j++)
		{
				if(j<i)
				{
					t[i][j]=t[i-temp][j];
					coins[i][j]=coins[i-temp][j];
				}
				else
				t[i][j]=min(t[i][j-i]+pr[i],t[i-temp][j]);
				coins[i][j]=min(coins[i][j-i]+1,coins[i-temp][j]);
		}
		temp=1;
	  }
	   else
			{
				for(j=1;j<=n;j++)
				t[i][j]=-1;
				temp++;
			}
			
		}
   if(t[k][n]<=0)
   cout<<"-1"<<endl;
   else
   cout<<t[k][k];
}
}
