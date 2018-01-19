#include<bits/stdc++.h>
using namespace std;

int dp[6200][6200]={};

int main()
{
	int t,i;
	scanf("%d",&t);
	while(t--)
	{
		string str;
	cin>>str;
	string pat(str);
	reverse(pat.begin(),pat.end());
		int i,j;
		int n=str.length();
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				
				if(str[i]==pat[j])
				{
					dp[i+1][j+1]=dp[i][j]+1;
				}
				else
				{
					dp[i+1][j+1]=max(dp[i][j],max(dp[i][j+1],dp[i+1][j]));
				}
			}
		}
		cout<<n-dp[n][n]<<endl;
		for(i=0;i<=n;i++)
		for(j=0;j<=n;j++)dp[i][j]=0;
	}
}
