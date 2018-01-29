#include<bits/stdc++.h>
using namespace std;

long long val[1000001]={};
long long phi[1000001]={};


void euler_totient()
{
	int i,j;
	for(i=1;i<=1000000;i++)
	phi[i]=i;
	
	for(j=2;j<=1000000;j++)
	{
		if(phi[j]==j)
		{
			phi[j]=j-1;
			for(i=j*2;i<=1000000;i+=j)
			{
				phi[i]=(phi[i]/j)*(j-1);
			}
		}
	}
}

void sumi()
{
	int i,j;

for(i=1;i<=1000000;i++)
{
	for(j=2;j*i<=1000000;j++)
	{
		val[i*j]=(val[i*j]+i*phi[j]);
	}	
}
for(i=2;i<=1000000;i++)
val[i]+=val[i-1];	
	
}
int main()
{
	int n;
	euler_totient();
	sumi();
     while(1)
	{
		scanf("%d",&n);
		if(n==0)
		break;
		else 
		printf("%lld\n",val[n]);
	}

}
