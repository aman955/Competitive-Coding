#include<bits/stdc++.h>
using namespace std;

long long int phi[1000001]={};
long long int lcm[1000001]={};
void euler()
{
	long long int i,j;
	for(i=1;i<=1000000;i++)
	phi[i]=i;
	
	for(i=2;i<=1000000;i++)
	{
		if(phi[i]==i)
		{
		  phi[i]=i-1;
		for(j=i*2;j<=1000000;j+=i)
		{
			phi[j]=(phi[j]/i)*(i-1);
		}
	    }
    }
}
void lcmi()
{
	long long int i,j;
	for(i=1;i<=1000000;i++)
	{
		for(j=i;j<=1000000;j+=i)
		{
			lcm[j]+=(phi[i]*i);
		}
		lcm[i]++;
		lcm[i]=(lcm[i]*i)/2;
	}
}

int main()
{
	int t;
	euler();
	

	lcmi();
	cin>>t;
	while(t--)
	{
		int n;
		scanf("%d",&n);
		printf("%lld\n",lcm[n]);
	}
}
