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

int pow(int a, int b, int MOD) {
int x = 1, y = a;
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
 
int m(int a, int m) {
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
	cout<<m(6,3);
}
