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

ll pow(ll a, ll b, ll MOD) {
ll x = 1, y = a;
    while(b > 0) {
        if(b%2 == 1) {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD;
        b /= 2;
    }
    return x;
}
 
ll mi(ll a, ll m) {
    return pow(a,m-2,m);
}
// C function for extended Euclidean Algorithm


inline ll digits(ll n){
	ll count=0;
	while(n){
		count++;
		n/=10;
	}
	return count;
}

int main(){
	ll t;
	cin>>t;
	while(t--){
		
		
		ll a,n,m;
		cin>>a>>n>>m;
		
		if(a==0){
			cout<<0<<endl;
			continue;
		}
		
		ll d= digits(a);
		
		ll r;
		r=pow_(10,n*d,m);
		
		ll numerator;
		numerator = (r-1+m)%m;
		
		ll denominator = pow(10,d)-1;
		denominator = mi(denominator,m);
		
		numerator = ((numerator%m)*(denominator%m))%m;
		ll ans = ((a%m)*(numerator%m))%m;
		cout<<ans<<endl;
	}
}
