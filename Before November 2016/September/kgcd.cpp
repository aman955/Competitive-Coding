#include <iostream>
using namespace std;


long long gcd(long long a, long long b)
{
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

long long kgcd(long long a, long long b)
{
    while (a > 0 && b > 0)
    {
        a -= b;
       swap(a,b);
    }
    return a + b;
}

int main()
{
	int t;
	cin>>t;
	long long a,b,i,j,n,c;
	while(t--)
	{
		cin>>n;
		c=0;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(gcd(i,j)==kgcd(i,j))
				c++;
			}
		}
		cout<<c<<endl;
		
	}
}
