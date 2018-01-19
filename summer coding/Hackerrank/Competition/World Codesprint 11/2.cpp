#include<iostream>
#include<cmath>
using namespace std;


long long modpow(int base, int exp, int modulus) {
  base %= modulus;
  long long  result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % modulus;
    base = (base * base) % modulus;
    exp >>= 1;
  }
  return result;
}

int main()
{
	string str;
	cin>>str;
	int i,k,b,m,n=str.length(),ans=0;
	cin>>k>>b>>m;
	int temp=k-1,tempsum=0;
	for(i=0;i<k;i++)
	{
		tempsum = (tempsum%m+((str[i]-'0')%m*modpow(b,temp,m))%m)%m;
		temp--;
	}
	ans=(tempsum%m);
    for(i=1;i<=n-k;i++)
    {
    	tempsum = (tempsum%m-((str[i-1]-'0')%m)*modpow(b,k-1,m)%m)%m;
    	tempsum = (tempsum%m*b%m)%m;
    	tempsum = (tempsum%m+(str[i+k-1]-'0')%m)%m;
    	ans=(ans+tempsum%m);
	}
	cout<<ans;
}
