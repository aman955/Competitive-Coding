#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

long long int power(long long int x, unsigned long long int y)
{
    long long  res = 1;      // Initialize result
 
    x = x % mod;  // Update x if it is more than or 
                // equal to p
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % mod;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % mod;  
    }
    return res;
}

int main()
{
	int t;
	cin>>t;
	long long n,m;
	while(t--)
	{
		cin>>n>>m;
		int k=n%3;
		long long x1;
		if(m>=2)
		x1=(m-2)*3+4;
		else if(m==1)
		{
			x1=1;
		}
		
		long long x2;
		if(m>=4)
		x2=(m-4)*3+8;
		else if(m==3)
		{
			x2=5;
		}
		else if(m==2)
		{
			x2=2;
		}
		else if(m==1)
		{
			x2=1;
		}
		
			
		
		long long x3;
		if(m>=6)
		x3=(m-6)*3+12;
		if(m==5)
		{
			x3=9;
		}
		else if(m==4)
		{
			x3=6;
		}
		else if(m==3)
		{
			x3=3;
		}
		else if (m==2)
		{
			x3=2;
		}
		else if(m==1)
		{
			x3=1;
		}
		n=n-1;
		long long p1=n/3;
		long long p2=(n+1)/3;
		long long p3=(n+2)/3;
		
		long long ans=(power(x1,p1)*power(x2,p2))%mod;
		ans=(ans*power(x3,p3))%mod;
		cout<<ans<<endl;
	}
}

