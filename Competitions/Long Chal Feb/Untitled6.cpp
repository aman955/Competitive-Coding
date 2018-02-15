#include<bits/stdc++.h>
#define ll long long
using namespace std;

int arr[1005][1005];

ll commDiv(ll a,ll b)
{
	if(a==b)
	return 0;
    // find gcd of a,b
    ll n = __gcd(a, b);
 
    // Count divisors of n.
    ll result = 0;
    for (ll i=1; i<=sqrt(n); i++)
    {
        // if 'i' is factor of n
        if (n%i==0)
        {
            // check if divisors are equal
            if (n/i == i)
                result += 1;
            else
                result += 2;
        }
    }
    return result;
}

int main()
{
	while(1)
	{
	int t,i,j;
	int n;
	n=1000;
	int arr[n];

	for(i=0;i<1000;i++)
	{
	
		arr[i]=i+1;
	}
		cout<<n<<endl;
	for(i=0;i<n;i++)
	{
		
		for(j=0;j<n;j++)
		cout<<commDiv(arr[i],arr[j])<<" ";
	    
	}
}

}
