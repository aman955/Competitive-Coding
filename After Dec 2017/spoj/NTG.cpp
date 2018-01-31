#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

long long int phi[100001]={};
long long int ntg[100001]={};
long long int modi_pow[100001]={};
int k;
void euler()
{
	long long int i,j;
	for(i=1;i<=100000;i++)
	phi[i]=i;
	
	for(i=2;i<=100000;i++)
	{
		if(phi[i]==i)
		{
		  phi[i]=i-1;
		for(j=i*2;j<=100000;j+=i)
		{
			phi[j]=(phi[j]/i)*(i-1);
		}
	    }
    }
}
long long mod_pow(long long x,long long y)
{
	long long res=1;
	x=x%mod;
	while(y>0)
	{
		if(y%2==1)
		res=(res*x)%mod;
		
		x=(x*x)%mod;
		y=y/2;
		
	}
	return res;
}

void ntgi()
{
	long long int i,j;
	for(i=1;i<=100000;i++)
	{
		for(j=i;j<=100000;j+=i)
		{
			long long temp=((phi[j/i]%mod)*modi_pow[i])%mod;
			ntg[j]=(ntg[j]+temp)%mod;
		}
		
	}
	for(i=1;i<=100000;i++)
	ntg[i]=(ntg[i]+ntg[i-1])%mod;
	
}

int main()
{
	int t;
	euler();
     cin>>k;
	for(int i=1;i<=100000;i++)
	{
		modi_pow[i]=mod_pow(i,k);
	}
	ntgi();

	cin>>t;
	while(t--)
	{
		int l,r;
		scanf("%d%d",&l,&r);
		long long ans=(ntg[r]-ntg[l-1]+mod)%mod;
		printf("%lld\n",ans);
	}
}
