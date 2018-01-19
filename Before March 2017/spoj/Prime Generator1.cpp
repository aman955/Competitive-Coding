#include<iostream>
#include<cmath>
using namespace std;
int checkprime(long long x);

int main()
{
	int t;
	cin>>t;
	long long n,m,i;
	while(t--)
	
	{cin>>n>>m;
		if(m>=2&&n<=2)
		cout<<"2"<<endl;
		if(!(n&1))
			n++;
		for(i=n;i<=m;i+=2)
		{
			if(checkprime(i))
			cout<<i<<endl;
		}
		cout<<endl;
	}
}

int checkprime(long long x)
{
	if(x==1)
	return 0;
	long z=sqrt(x),i;
	if(!(x&1))
	return 0;
	for(i=3;i<=z;i+=2)
	{
		if(x%i==0)
		return 0;
	}
	return 1;
}
