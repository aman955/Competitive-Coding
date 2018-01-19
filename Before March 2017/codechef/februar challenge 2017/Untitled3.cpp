#include<bits/stdc++.h>
#define ll long long
using namespace std;

long long pow_(long long base, long long exponent,long long mod)
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

ll gp(ll x,ll n,ll m)
{
	if(n==0) return 0;
	if(n==1) return 1;
	if(n==2) return 1+x;
	if(n==3) return (1+x+x*x)%m;
	
	if((n&1)){
		return (  (gp(x,n/2,m)%m)*(1 + pow_(x,n/2+1,m)) + pow_(x,n/2,m) )%m;
	}
	else
	{
		return ( (gp(x,n/2,m)%m) * (1 + pow_(x,n/2,m)) )%m;
	}
}

int digits(ll n){
	int count=0;
	while(n){
		count++;
		n/=10;
	}
	return count;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		
		ll a,n,m,ans;
		cin>>a>>n>>m;
		int d= digits(a);
		
		ll x;
		x=pow_(10,d,m);
		
		ans = gp(x,n,m);
		ans = ((a%m)*ans)%m;
		cout<<ans<<endl;
	}
}
