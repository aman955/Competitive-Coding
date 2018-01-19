#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,ans=0,x;
		long long min=10000000000000;
		scanf("%d",&n);
		while(n--)
		{
			scanf("%d", &x);
			if(x<=min)
			{
				ans++;
				min=x;
			}
		}
		printf("%d\n",ans);
	}
}
