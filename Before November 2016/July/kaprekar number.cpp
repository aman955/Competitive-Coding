#include<iostream>
using namespace std;
int dig(long x);

int main()
{
	long p,q,k,i,j;
	int d,m=0,ans=0,l;
	cin>>p>>q;
	long long n,num1,num2;
	for(i=p;i<=q;i++)
	{
		k=1;
		d=dig(i);
		n=i*i;
	  for(j=0;j<d;j++)
		k=k*10;
		
		num1=(i*i)%k;
		num2=(i*i)/k;
		if(num1+num2==i)
		cout<<i<<" ";
		
	}
}

int dig(long x)
{
	int temp=0;
	while(x!=0)
	{
		x=x/10;
		temp++;
	}
	return temp;
}
