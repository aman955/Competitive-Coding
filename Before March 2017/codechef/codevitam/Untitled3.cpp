#include<iostream>
#define mod 7
using namespace std;

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
	cout<<modular_pow(2,5);
}
