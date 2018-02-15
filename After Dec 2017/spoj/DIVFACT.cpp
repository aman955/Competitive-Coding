#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

int divta[50001]={};

void divi()
{
	int i,j;
	for(i=1;i<=50000;i++)
	{
		for(j=i;j<=50000;j+=i)
		{
			divta[j]++;
		}
	}
	cout<<divta[4];
	for(i=2;i<=50000;i++)
	{
		divta[i]=(divta[i]*divta[i-1])%mod;
	}
}

int main()
{
	divi();
	int t;
	scanf("%d",&t);
	long long n;
	while(t--)
	{
		scanf("%lld",&n);
		printf("%lld\n",divta[n]);
	}
}
