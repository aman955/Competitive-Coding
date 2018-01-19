#include<iostream>
using namespace std;
long long dp[1000001]={};

int main()
{
	int t;
	long long i;
	dp[1]=1;
	dp[2]=5;
	for(i=3;i<=1000000;i++)
	{
		dp[i]=dp[i-1]+2*i-1+((i)*(i-1))/2;
	}
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<dp[n]<<endl;
	}
}
