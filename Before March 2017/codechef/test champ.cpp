#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;

int main()
{
	long n,q,l,r,i;
	cin>>n>>q;
	
	vector<long long> ar(n+1);
	long long int x;
	for(i=1;i<=n;i++)
	scanf("%lld",&ar[i]);
	
	while(q--)
	{
      long count=0;
	scanf("%ld %ld %lld",l,r,x);
	for(i=l;i<=r;i++)
	{
	if(ar[i]>x)
	count++	;
	}
	printf("%d\n",count);
	}
	
	
	
}
