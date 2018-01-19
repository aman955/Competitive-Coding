#include<iostream>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int n=str.length(),i,j;
	int dp[n+1][n+1];
	
	for(i=0;i<n;i++)dp[i][i]=i;
	for(i=0;i<n-1;i++)dp[i][i+1]=(str[i]==str[i+1]);
	
	for(i=0;i<n;i++)
	{
		for(j=i+2;j<n;j++)
		{
			if(dp[i+1][j-1]&&str[i]==str[j])
			dp[i][j]=1;
		}
	}
	int con=0;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(dp[i][j])
			con++;
		}
	}
	cout<<con<<endl;
}
