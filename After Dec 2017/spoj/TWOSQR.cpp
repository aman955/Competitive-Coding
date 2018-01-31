#include<bits/stdc++.h>
using namespace std;

int twosqr(long long x)
{
	long long i=sqrt(x),j=0;
	while(i>0)
	{
		if(j*j>x)
		{
			return 0;
		}
		else if((i*i+j*j)==x)
		{
			return 1;
		}
		else if((i*i+j*j)<x)
		{
			j++;
		}
		else
		{
			i--;
		}
	}
}

int main()
{
	int t,i,ans;
	scanf("%d",&t);
	long long n;
	for(i=1;i<=t;i++)
	{
		scanf("%lld",&n);
		ans=twosqr(n);
		if(ans)
		printf("Yes\n");
		else
		printf("No\n");
	}
	
}
