#include<iostream>
#define mod 1000000007

using namespace std;


void mul(long long fib[2][2],long long m[2][2])
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
    long long mat[2][2]={{1,1},{1,0}};
	if(n==0||n==1)
	return ;
	pow(fib,n/2);
	mul(fib,fib);
	if(n&1)
	mul(fib,mat);
}

long long fibi(long long n)
{
	long long fib[2][2]={{1,1},{1,0}};
	if(n==1)
	return 1;
	if(n==0)
	return 0;
	pow(fib,n-1);
	return fib[0][0];
}

long long sum(long long n)
{
	return fibi(n+2);
}


int main()
{
int t;
cin>>t;
while(t--)
{
	long long int m,n;
	long long ans;
	cin>>n>>m;
	ans = (sum(m) - sum(n-1))%mod;
  if(ans<0)
    ans = ans+mod;
  ans = ans % mod;
  cout<<ans<<endl;
}
}
