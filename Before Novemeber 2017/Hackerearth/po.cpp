#include<iostream>
#define mod 1000000007
using namespace std;

long long fib[1000001]={};


int main()
{
fib[0]=0;
fib[1]=1;
long i;
   for(i=2;i<=1000000;i++)
  {	
  fib[i]=(fib[i-1]%mod+fib[i-2]%mod)%mod;
  }
  
	int t;
	cin>>t;
	long a,b,c,x;
	while(t--)
	{
		cin>>x;
		if(x<=1000000)
		cout<<fib[x]<<endl;
		else
		{
			a=fib[999999];
			b=fib[1000000];
			for(i=1000001;i<=x;i++)
			{
				c=(a%mod+b%mod)%mod;
				a=b;
				b=c;
			}
			cout<<c<<endl;
		}
	}
}
