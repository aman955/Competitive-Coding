#include<iostream>
#include<cmath>
#define ll long long
using namespace std;

inline long long pow_(long long base, long long exponent,long long mod)
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

inline int mi(int a, int m)
{
    a = a%m;
    for (int x=1; x<m; x++)
       if ((a*x) % m == 1)
          return x;
}

inline int digits(ll n){
	int count=0;
	while(n){
		count++;
		n/=10;
	}
	return count;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		
		ll a,n,m;
		cin>>a>>n>>m;
		int d= digits(a);
		
		ll r;
		r=pow_(10,n*d,m);
		
		ll numerator;
		numerator = (r-1);
		
		ll denominator = pow(10,d)-1;
		denominator = mi(denominator,m);
		
		numerator = ((numerator)*(denominator))%m;
		ll ans = ((a%m)*(numerator))%m;
		cout<<ans<<endl;
	}
}
