#include<bits/stdc++.h>
using namespace std;

bool prime[1000001];
vector<int> c;
int b[80000];

int primegen()
{
	long long int i,j;
	memset(prime,true,sizeof(prime));
	prime[0]=false;prime[1]=false;prime[2]=true;
	for(i=2;i*i<=1000000000000;i++)
	{
		if(prime[i])
		{
			for(j=i*i;j<=1000000;j+=i)
			{
				prime[j]=false;
			}
		}
	}
	int count=0;
	for(i=2;i<=1000000;i++)
	{
		if(prime[i])
		{
		c.push_back(i);
		count++;
	}
	}
}


int main()
{
	primegen();

	
	int t,i;
	cin>>t;
	while(t--)
	{
		for(i=0;i<80000;i++)b[i]=1;
	int n;
	int x;
	cin>>n;	
	while(n--)
	{
		cin>>x;
			
			for(i=0;i<c.size();i++)
			{
			while(x%c[i]==0 && x!=0)
			{
				x=x/c[i];
				b[i]++;
			}
			}
	}
	long long ans=1;
	for(i=0;i<80000;i++)
	ans=ans*b[i];
	cout<<ans<<endl;
	}
}
