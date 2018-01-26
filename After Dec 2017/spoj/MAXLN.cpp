#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		long long n;
		scanf("%lld",&n);
		long long p=n*n*4;
		printf("Case %d: %lld.25\n",i,p);
	}
}
