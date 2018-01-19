#include<iostream>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int t,i;
	cin>>t;
	int dp[str.length()];
	dp[0]=0;
	for(i=1;i<str.length();i++)
	{
		if(str[i]==str[i-1])
		{
			dp[i]=dp[i-1]+1;
		}
		else
		dp[i]=dp[i-1];
	}
	int p,q;
	while(t--)
	{
		cin>>p>>q;
		cout<<dp[q-1]-dp[p-1]<<endl;
	}
}
