#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

long long mod_pow(long long x,long long y)
{
	long long res=1;
	x=x%mod;
	while(y>0)
	{
		if(y%2==1)
		res=(res*x)%mod;
		
		x=(x*x)%mod;
		y=y/2;
		
	}
	return res;
}

int main()
{
	long long x=5;
	long long y=1000000000;
	int count=0;
	while(x<y)
	{
		count++;
		x=x*5;
	}
	cout<<count<<endl;
}
