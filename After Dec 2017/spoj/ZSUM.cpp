#include<bits/stdc++.h>
#define mod 10000007
using namespace std;

long long pow_mod(long long x,long long y)
{
	long long ans=1;
	x=x%mod;
	while(y>0)
	{
		if(y&1)
		{
			ans=(ans*x)%mod;
		}
		y=y/2;
		x=(x*x)%mod;
	}
	return ans;
}


int main()
{
while(1)
{
	long long int n,k;
	scanf("%lld%lld",&n,&k);
	if(n==0&&k==0)
	return 0;
	long long ans1,ans2,ans3,ans;
	ans1= (pow_mod(n-1,k)*2)%mod;
	ans2=(pow_mod(n-1,n-1)*2)%mod;
	ans3=(pow_mod(n,k)+pow_mod(n,n))%mod;
	ans=(ans1+ans2)%mod;
	ans=(ans+ans3)%mod;
	printf("%lld\n",ans);
	
	}	
}
