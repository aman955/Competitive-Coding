#include<bits/stdc++.h>
using namespace std;

bool isprime[5000010];
bool ishypotenus[5000010];
vector<int> prime;
int lim=5000000;

void process()
{
	memset(isprime,true,sizeof(isprime));
	
	isprime[0]=false;isprime[1]=false; isprime[2]=true;
	int i,j;
	for(i=2;i*i<=lim;i++)
	{
		if(isprime[i])
		{
			for(j=i*i;j<=lim;j+=i)
			{
				isprime[j]=false;
			}
		}
	}
	
	for(i=2;i<=lim;i++)
	{
		if(isprime[i]&&(i%4)==1)prime.push_back(i);
	}
	int p;
	for(i=0;i<prime.size();i++)
	{
		p=prime[i];
		for(j=p;j<=lim;j+=p)ishypotenus[j]=true;
	}
	
}

int main()
{
	process();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(ishypotenus[n])cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	
}

