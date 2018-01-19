#include<iostream>
#include<cmath>
using namespace std;

int f[2000002]={};
long long int val[1000001]={};

int sumi(long x)
{
	int count=0,count2=0,c;
	int temp=x;
	while(temp!=0)
	{
		c=temp%10;
		if(c&1)
		count+=c;
		else
		count2+=c;
		temp=temp/10;
	}
	return abs(count-count2);
}
int main()
{
	for(int i=1;i<=2000000;i++)
	{
		f[i]=sumi(i);
	}
     val[1]=2;
     val[2]=12;
			long long i,temp=7;
			for(i=3;i<=1000000;i++)
			{
				temp=temp-f[i]+f[2*i]+f[2*i-1];
				val[i]=val[i-1]+2*temp-f[2*i];
			}
			int t;
			cin>>t;
			long long n;
			while(t--)
			{
				scanf("%lld",&n);
				printf("%lld\n",val[n]);
				
			}
		}
	  

