#include<iostream>
#include<cmath>
#include <map>
#define mod 1000000007
#define M mod
using namespace std;
map<long, long> F;

long long f(long long n) {
	if (F.count(n)) return F[n];
	long long k=n/2;
	if (n%2==0) { // n=2*k
		return F[n] = (f(k)*f(k) + f(k-1)*f(k-1)) % M;
	} else { // n=2*k+1
		return F[n] = (f(k)*f(k+1) + f(k-1)*f(k)) % M;
	}
}


long long modular_pow(long long base, long long exponent)
{
    long long result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * base) % mod;
        exponent = exponent >> 1;
        base = (base * base) % mod;
    }
    return result;
}

int main()
{
	F[0]=F[1]=1;
	int x=100;
	int a=sqrt(5);
	long long array[100];
	array[0]=2;
	array[1]=3;
	for(int i=2;i<x;i++){
		array[i]=(array[i-1]+array[i-2])%mod;
	}
	long t;
	long long n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n==1)
		{
			cout<<"0"<<endl;
			continue;
		}
		
	
		long long y = modular_pow(2,n);
		cout<<(y-f(n+1)+mod)%mod<<endl;
		
	}
}
