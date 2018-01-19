#include<iostream>
#include<cmath>
using namespace std;
int checkprime(long long x);
long long prime(long long j);

int main()
{
	long q,c;
	cin>>q;
	long long n,k,j;
	while(q--)
	{
		c=0;
	cin>>n;
	j=2;
	k=1;
	
	while(k<=n)
	{
		k=k*j;
			j=prime(j);
			c++;
	}
	cout<<c-1<<endl;
    }
}

long long prime(long long j)
{j++;
	while(!checkprime(j))
	{
		j++;
	}
	return j;
}

int checkprime(long long x)
{
	long long i;
	if(x==1)
	return 0;
	if(x%2==0)
	return 0;
	for(i=3;i<=sqrt(x);i+=2)
	{
		if(x%i==0)
		return 0;
	}
	return 1;
}
