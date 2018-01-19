#include<iostream>
using namespace std;
int digits(long x);
long fact(int x);

int main()
{
	int m,j,d;
	long long sum=0;
	long n,k,i,finalsum=0;
	cin>>n;
	for(i=10;i<n;i++)
	{
		sum=0;
		k=i;
		d=digits(i);
		for(j=0;j<d;j++)
		{
			m=k%10;
			sum=sum+fact(m);
			k=k/10;
			
		}
		if(sum%i==0)
			{
				finalsum=finalsum+i;
			}
		
	}
	cout<<finalsum;
	
}

long fact(int x)
{
	long f=x;
	if(x==0)
	return 1;
	else 
	f=f*fact(x-1);
	return f;
}
int digits(long x)
{
	int temp=0;
	while(x!=0)
	{
		x=x/10;
		temp++;
	}
	return temp;
}
