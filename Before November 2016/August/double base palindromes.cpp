#include<iostream>
using namespace std;
int palindrome(long long x);
long long convertor(long long x);
int k;

int main()
{
	long long d,sum=0;
	long long n,i;
	cin>>n>>k;
	for(i=1;i<=n;i++)
	{
		if(palindrome(i))
		{
		d=convertor(i);
		if(palindrome(d))
		{
		sum=sum+i;
	    }
	    
	}
}
	cout<<sum;
}

long long convertor(long long x)
{
	int b;
	long long base=1;
	long long num=0;
		while(x!=0)
	{
		b=x%k;
		num=base*b+num;
		x=x/k;
		base=base*10;
	}
	return num;
}

int palindrome(long long x)
{
	int c;
	long long t=x,num=0;
	while(x!=0)
	{
		c=x%10;
		num=num*10+c;
		x=x/10;
	}
	if(t==num)
	return 1;
	else 
	return 0;
}
