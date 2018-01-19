#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007

typedef long long int lli;
lli binomialCoeff(lli n, lli k)
{
    double res = 1;
 
    // Since C(n, k) = C(n, n-k)
    if (k > n - k)
        k = n - k;// We do this for keeping low complexity 
 
    // Calculate value of [n*(n-1)*---*(n-k+1)] / [k*(k-1)*---*1]
    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }
 
    return res;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
	double x=binomialCoeff(a-1,b-1);
	printf("%.0f\n",x);
}
}
