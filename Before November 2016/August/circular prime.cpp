#include<iostream>
#include<cmath>
using namespace std;

int checkprime(long long x);
int digits(long long x);
int finalcheck(long long x);

int main()
{
	long long n,sum=0,i;
	cin>>n;
	for(i=2;i<=n;i++)
	{
		if(i%2!=0&&i%3!=0)
		{
			if(checkprime(i))
			{
				if(finalcheck(i))
				{
					
				sum=sum+i;
			}
			}
		}
	}
if(n==2)
cout<<"2";
else if(n==3)
cout<<"5";
else if(n>3)
	cout <<sum+5;
	
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
int finalcheck(long long x)
{
	long long k=x;
	int d,c,i;
	d=digits(x);
	for(i=0;i<d-1;i++)
	{
		c=k%10;
		k=k/10+c*pow(10,d-1);
		if(!checkprime(k))
		return 0;
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
