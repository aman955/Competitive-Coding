#include<iostream>
#include<vector>
#include<map>
const int M=1e7+3;
using namespace std;
bool p[M];
vector<int>v;
map<long long,long long> m, k;
void sieve(long long a,long long b)
{
	p[1]=true;
	for(long long i=2;i*i<=M;i++)
	{
		if(p[i]) continue;
		for(int j=i*i;j<=M;j+=i)
		p[j]=true;
	}

	for(long long int i=2;i<=M;i++)
	{
		if(!p[i])
		v.push_back(i);
	}

	for(long long i=a;i<=b;i++)
	{
		
	m[i]=i;
	k[i]=i;
    }

	for(long long int i=0;i<v.size();i++)
	{
	
		long long x=(a/v[i]);
		x=x*v[i];
		for(long long j=x;j<=b;j+=v[i])
		{
	
		if(j<a)
		continue;
	
			m[j]/=v[i];
			m[j]*=(v[i]-1);
			
			while((k[j]%v[i])==0)
			{
			
				k[j]=k[j]/v[i];
			}
		}
	}

	for(long long j=a;j<=b;j++)
	{
		if(k[j]!=1)
		{
			m[j]/=(k[j]);
			m[j]*=(k[j]-1);
		}
	}
}
int main() {
	long long a,b;
	cin>>a>>b;
	sieve(a,b);
	for(long long i=a;i<=b;i++)
	cout<<m[i]<<endl;
	return 0;
}
