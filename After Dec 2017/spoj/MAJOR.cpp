#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,x,i;
	scanf("%d",&t);
	int n;
	while(t--)
	{
	map<long long,long long> mp;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		mp[x]++;
	}
	int j=0;
	map<long long,long long>::iterator it;
	for(it=mp.begin();it!=mp.end();it++)
	{
		if(it->second>n/2)
		{
			printf("YES %d\n",it->first);
			j=1;
			break;
		}
	}
	if(j!=1)
	printf("NO\n");
	
	}
}
