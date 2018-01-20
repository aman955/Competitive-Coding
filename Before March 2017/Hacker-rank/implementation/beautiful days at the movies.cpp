#include<iostream>
#include<cmath>
using namespace std;

long long k;
int reverse(long long x)
{
	long long temp=x,rev=0;
	int b;
	while(x!=0)
	{
		b=x%10;
		rev=rev*10+b;
		x=x/10;
	}
	long long c=abs(rev-temp);
	if(c%k==0)
	return 1;
	return 0;
}

int main()
{
	long long in,out,count=0,i;
	cin>>in>>out>>k;
	for(i=in;i<=out;i++)
	{
	if(reverse(i))
	count++;	
	}
	cout<<count;
}
