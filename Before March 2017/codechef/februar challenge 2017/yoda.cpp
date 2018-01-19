#include<iostream>
#include<cmath>
using namespace std;

long long factorial(long long n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,win=0,lose=0;
		cin>>n>>m;
		int c=n%2,d=m%2;
		if(c==0&&d==0)
		{
			win=1;
		}
		else if(c==1&&d==1)
		{
			lose=1;
		}
		else
		{
			win=1/2;
			lose=1/2;
		}
		long long i,k,p;
		cin>>p>>k;
		if(p==0)
		{
			cout<<"1.000000"<<endl;
			continue;
		}
		if(win==1)
		{
			cout<<"1.000000"<<endl;
			continue;
		}
		if(lose==1)
		{
			cout<<"0.000000"<<endl;
			continue;
		}
		double ans=0;
		for(i=p;i<=k;i++)
		{
			ans=ans+factorial(k)/(factorial(i)*factorial(k-i));
		}
		ans=ans/(pow(2,k));
		printf("%0.6lf\n",ans);
	}
}
