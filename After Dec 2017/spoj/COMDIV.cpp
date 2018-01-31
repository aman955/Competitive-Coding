#include<bits/stdc++.h>
using namespace std;

int counti[1000001]={};
void sieve()
{
	
	int i,j;
	for(i=1;i<=1000000;i++)
	{
		for(j=i;j<=1000000;j+=i)
		counti[j]++;
	}
}
long long gcd(long long a,long long b)
{
	if(a==0)
	return b;
	
	return gcd(b%a,a);
}
int main()
{
	sieve();
		int t;
	scanf("%d",&t);
	while(t--)
	{
	long long a,b;
	scanf("%lld%lld",&a,&b);
     long long p=gcd(a,b);

	long long c=counti[p];
	printf("%lld\n",c);
    }
}
