#include<bits/stdc++.h>
using namespace std;

int phi[1000001]={};
int val[1000001]={};
int comp[21][1000001]={};

void euleri()
{
	int i,j;
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

long long vali(int x)
{
	if(val[x]!=-1)
	return val[x];
	
	val[x]=vali(phi[x])+1;
	return val[x];
}


int main()
{
	int t;
	cin>>t;
euleri();
	memset(val,-1,sizeof(val));
	memset(comp,0,sizeof(comp));
	val[1]=0;
	for(int i=1;i<=1000000;i++)
	{
		if(val[i]==-1)vali(i);
	}

	int count=0;
	for(int j=0;j<=20;j++)
	{
	for(int i=1;i<=1000000;i++)
	{
		if(val[i]==j)
		{
			comp[j][i]=comp[j][i-1]+1;
		}
		else
		{
		comp[j][i]=comp[j][i-1];
	}
}
	
		
	}
	int a,b,k;
	while(t--)
	{
	cin>>a>>b>>k;
	long long ans=comp[k][b]-comp[k][a-1];
	cout<<ans<<endl;
    }
}
