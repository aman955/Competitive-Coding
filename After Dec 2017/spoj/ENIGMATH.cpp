#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b)
{
	if(a==0)
	return b;
	
	return gcd(b%a,a);
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	long long a,b;
	scanf("%lld%lld",&a,&b);
	long long c=gcd(a,b),g=a,h=b;
	a=(h)/c;
	b=(g)/c;
	printf("%lld %lld\n",a,b);
    }	
}
