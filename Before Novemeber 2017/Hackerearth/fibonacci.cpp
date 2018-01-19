#include<iostream>
#define mod 1000000007
using namespace std;

void multiply(long long fib[2][2],long long m[2][2])
{
	long long x=(((fib[0][0])%mod*(m[0][0]%mod))%mod+((fib[0][1])%mod*(m[1][0])%mod)%mod)%mod;
	long long y=(((fib[0][0])%mod*(m[0][1]%mod))%mod+((fib[0][1])%mod*(m[1][1])%mod)%mod)%mod;
	long long z=(((fib[1][0])%mod*(m[0][0]%mod))%mod+((fib[1][1])%mod*(m[1][0])%mod)%mod)%mod;
	long long w=(((fib[1][0])%mod*(m[0][1]%mod))%mod+((fib[1][1])%mod*(m[1][1])%mod)%mod)%mod;

	fib[0][0]=x;
	fib[0][1]=y;
	fib[1][0]=z;
	fib[1][1]=w;
}

void pow(long long fib[2][2],long long n)
{
		long long  m[2][2]={{1,1},{1,0}};
	if(n==0||n==1)
	return;
	pow(fib,n/2);
	multiply(fib,fib);
	
	if(n%2!=0)
	multiply(fib,m);
	
}


long long fib(long long n)
{
	long long  fib[2][2]={{1,1},{1,0}};
	if(n==0||n==1)
	return 1;
	pow(fib,n-1);
	return fib[0][0];
	
}


int main()
{
	long long n;
	cin>>n;
	 cout<<fib(n)<<endl;
}
