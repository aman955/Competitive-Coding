#include<iostream>
using namespace std;

long long flip(long x)
{
	long c,temp=0,base=1;
	while(x!=0)
	{
		c=x%2;
		temp=temp+(1-c)*base;
		x=x/2;
		base=base*2;
	}
	return temp;
}

int main()
{
	long long t,x;
	cin>>t;
	while(t--)
	{
		cin>>x;
		cout<< flip(x) <<endl;
	}
}
