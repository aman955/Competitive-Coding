#include<iostream>
#define mod 1000000007
using namespace std;

long long modulus(int x);
long dpmod[100005];
dp[0]=1;

int main()
{
	string str;
	cin>>str;
	long n=str.length(),i;
	for(i=0;i<n;i++)
	{
		temp=modulus(n-i);
		ans=ans+str[i]*(i+1)*;
		
		
	}
}

long long modulus(long x)
{
	for(i=0;i<x;i++)
	{
		dpmod[i+1]=dpmod[i]%mod+ power_modulus(10,i,mod);
		dpmod[i+1]%=mod;
	}
}

unsigned long long power_modulus(int a,int b,int mod)//(a^b)%mod
{
	long int res=1;
	
	for(int i=0;i<b/2;i++)
	{
		res*=((a*a)%n);
		res%n=n;
	}
	
	if(b%n==1)
	res*=a;
	
	res%=n;
	return res;
}
