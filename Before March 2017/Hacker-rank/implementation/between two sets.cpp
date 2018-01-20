#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int lcm(int a,int b)
{
	int x=gcd(a,b);
	return a*b/x;
}

int main()
{
	int m,n,i,j,k=2,temp,count=0;
	cin>>m>>n;
	int a[m],b[n];
	for(i=0;i<m;i++)
	{
		cin>>a[i];
	}
		for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	int lcm1=a[0];
	for(i=1;i<m;i++)
	{
		lcm1=lcm(lcm1,a[i]);
	}

	int gcd1=b[0];
    for(i=1;i<n;i++)
    {
    	gcd1=gcd(gcd1,b[i]);
	}

	temp=lcm1;
	while(lcm1<=gcd1)
	{
		if(gcd1%lcm1==0)
		count++;
		lcm1=temp*k;
		k++;
	}
	cout<<count;
}
