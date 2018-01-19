#include<iostream>
#include<cmath>
using namespace std;

int checkprime(long long x);
int digits(long long x);

int main()
{
	int t,k;
	cin>>t;
	long long n[t],m[t],i;
	for(i=0;i<t;i++)
	cin>>n[i]>>m[i];
	
	for(k=0;k<t;k++)
	{
		if(n[k]<3)
	cout<<"2"<<endl<<"3"<<endl;
	if(n[k]==3)
	cout<<"3"<<endl;
		for(i=n[k];i<=m[k];i++)
		{
			if(i%2!=0&&i%3!=0)
			{
		  if(checkprime(i))
		  cout<<i<<endl;
	    }
	}
	
}
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

int finalcheck(long long x)
{
	long long k=x;
	int d,c;
	d=digits(x);
	for(i=0;i<d-1;i++)
	{
		c=x%10;
		k=x/10+c*pow(10,d-1);
		if(!checkprime(k))
		return 0;
	}
	return1;
}

int digits(long long x)
{
	int temp=0;
	while(x!=0)
	{
		x=x/10;
		temp++;
	}
	return temp;
}
