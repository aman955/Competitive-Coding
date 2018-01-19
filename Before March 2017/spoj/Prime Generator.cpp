#include<iostream>
#include<cmath>
using namespace std;
int checkprime(long long x);

int main()
{
	int t;
	cin>>t;
	int p=t;
	long long n[t],m[t],i;
	for(i=0;i<t;i++)
	cin>>n[i]>>m[i];
	t=0;
	cout<<endl;
	while(t<p)
	{
		if(m[t]>=2)
		cout<<"2"<<endl;
		if(!(n[t]&1))
			n[t]++;
		for(i=n[t];i<=m[t];i+=2)
		{
			if(checkprime(i))
			cout<<i<<endl;
		}
		cout<<endl;
		t++;
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
