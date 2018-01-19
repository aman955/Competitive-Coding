#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int x,i,n,sum=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&x);
			sum=(sum+x)%n;
		}
		if(sum%n==0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}
