#include<iostream>
using namespace std;

int main()
{
	int t;
	long long x,ans=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&x);
		ans^=x;
	}
	printf("%lld\n",ans);
}
