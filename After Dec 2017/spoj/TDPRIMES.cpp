#include<bits/stdc++.h>
using namespace std;

bool prime[100000001]={};

vector<int> v;

void primer()
{
	memset(prime,true,sizeof(prime));
	prime[1]=false;
	long long i,j;
	for(i=2;i*i<=100000000;i++)
	{
		if(prime[i])
		{
			for(j=i*i;j<=100000000;j+=i)
			{
				prime[j]=false;
			}
		}
	}
	for(i=1;i<=100000000;i++)
	{
		if(prime[i])
		v.push_back(i);
	}
}

int main()
{
	primer();
	for(long long int i=0;i<v.size();i+=100)
	{
		cout<<v[i]<<endl;
	}

}
