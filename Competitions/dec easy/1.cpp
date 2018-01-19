#include<iostream>
#include<cmath>
using namespace std;

int f[1000001]={};

int sumi(int x)
{
	int count=0,c;
	int temp=x;
	while(temp!=0)
	{
		c=temp%10;
		if(c&1)
		count+=c;
		temp=temp/10;
	}
	return count;
}

int main()
{
	int t;
	for(int i=1;i<=1000000;i++)
	{
		f[i]=sumi(i);
	}
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int p=sqrt(n);
		long ans=0;
		for(i=1;i<=p;i++)
		{
			if(n%i==0)
			{
				ans+=f[i];
				if(n/i!=i)
				{
					ans+=f[n/i];
				}
			}
		}
		cout<<ans<<endl;
	}
}
