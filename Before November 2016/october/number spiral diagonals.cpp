#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	long long n,a,b,c,ans;
	long mod=1000000007;
	while(t--)
	{
		cin>>n;
		n=n/2;
		long long ans1,ans2,ans3,ans4;
		
		ans4=(n%mod)*4;
		ans4=ans4%mod;
		
		ans2=(2)*(n%mod)*((n+1)%mod);
		ans2=ans2%mod;
		
		if(n%3==0)
		{
			a=n/3;
			a=a%mod;
			b=n+1;
			b=b%mod;
			c=2*n+1;
			c=c%mod;
			
			ans3=(8)*(a)*(b)*(c);
			ans3=ans3%mod;
		}
		else if(n%3==2)
		{
			a=n;
			a=a%mod;
			b=(n+1)/3;
			b=b%mod;
			c=2*n+1;
			c=c%mod;
			
			ans3=(8)*(a)*(b)*(c);
			ans3=ans3%mod;
		}
		else
		{
			a=n;
			a=a%mod;
			b=n+1;
			b=b%mod;
			c=(2*n+1)/3;
			c=c%mod;
			
			ans3=(8)*(a)*(b)*(c);
			ans3=ans3%mod;
		}
		cout<<ans2<<endl<<ans3<<endl<<ans4<<endl;
		
		
		
		ans=1+ans2+ans3+ans4;
		ans=ans%mod;
		cout<<ans<<endl;
		
	}
}
