#include<iostream>
#define mod 1000000007
using namespace std;

long dp[100005];
long sum[100005];
int main()
{
	int t,k,i,a,b;
	cin>>t>>k;
	sum[0]=0;
for(i=1;i<k;i++)
{
	dp[i]=1;
	sum[i]=(sum[i-1]%mod+dp[i]%mod)%mod;
}
dp[0]=1;
for(i=k;i<=100000;i++)
{
	dp[i]=(dp[i-k]%mod+dp[i-1]%mod)%mod;
	sum[i]=(sum[i-1]%mod+dp[i]%mod)%mod;
}


while(t--)
{
	cin>>a>>b;
	cout<<(sum[b]%mod-sum[a-1]%mod)%mod<<endl;
}

}
