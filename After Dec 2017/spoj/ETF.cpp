#include<bits/stdc++.h>
using namespace std;

long long int euler[1000001];
bool prime[1000001];

void prim()
{
	memset(prime,true,sizeof(prime));
	long long int i,j;
	prime[1]=false;
	for(i=2;i*i<=1000000;i++)
	{
		if(prime[i])
		{
			for(j=i*2;j<=1000000;j+=i)
			prime[j]=false;
		}
	}
}

void euleri()
{
	long long int i,j;
for(i=2;i<=500000;i++)
{
	if(prime[i])
		{
		euler[i]=i-1;	
		}
	for(j=i*2;j<=1000000;j+=i)
	{
		euler[j]=euler[j]-euler[i];
	}
	}	
}

int main()
{
for(long long int i=2;i<=1000000;i++)euler[i]=i-1;
euler[1]=1;
prim();
euleri();
long long int t,n;
scanf("%lld",&t);
while(t--)
{
	scanf("%lld",&n);
	printf("%lld\n",euler[n]);
}
}
