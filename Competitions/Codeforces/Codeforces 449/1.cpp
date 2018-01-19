#include<iostream>
using namespace std;

long long power(long long int x, long long unsigned int y,long long int p)
{
    long long int res = 1;      // Initialize result
 
    x = x % p;  // Update x if it is more than or 
                // equal to p
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;  
    }
    return res;
}



long long func(long long x,long long p)
{
	long long temp=x,rev=0;
	long long b=1,c,len=0;
	while(temp!=0)
	{
		c=temp%10;
		rev=rev*10+c;
		temp=temp/10;
		len++;
	}
	
	long long ans=0;
	ans=(x%p);
	ans=(ans*(power(10,len,p)))%p;
	ans=(ans+rev%p)%p;
	return ans;
	
}

int main()
{
	long long i,k,p;
cin>>k>>p;
	long long ans=0;
	for(i=1;i<=k;i++)
	{
		ans=(ans%p+func(i,p))%p;
	}
	cout<<ans<<endl;
}
