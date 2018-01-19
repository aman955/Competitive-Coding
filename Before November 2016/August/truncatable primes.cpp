#include<iostream>
#include<cmath>
using namespace std;
int digits(long long x);
int checkprime(long long x);
int checkdig(long long x);

int main()
{
	long n;
	cin>>n;
	long long sum=0,i;
	for(i=11;i<n;i+=2)
	{
		if(i%3!=0&&i%5!=0)
		{
			if(checkprime(i))
			{
				if(checkdig(i))
				sum=sum+i;
			}
			
		}
	}
	cout<<sum;
}

int checkprime(long long x)
{
	long long i;
	if(x==1)
	return 0;
	if(x==2)
	return 1;
	if(x%2==0)
	return 0;
	for(i=3;i<=sqrt(x);i+=2)
	{
		if(x%i==0)
		return 0;
	}
	return 1;
}

int checkdig(long long x)
{
	long c;
	long long t=x,i;
	int n=digits(x);
	for(i=0;i<n-1;i++)
	{
		t=t/10;
		if(!checkprime(t))
		{
			return 0;
		}
	}
		for(i=n-1;i>0;i--)
	{
		c=pow(10,i);
		x=x%c;
		if(!checkprime(x))
		{
			return 0;
		}
	}
	return 1;
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
