#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int n;
		cin>>n;
		if(n==1)
		{
		cout<<"Richard"<<endl;
		continue;
		}
		int  x=0,c,z=0,moves;
while(n!=1)
{
	if(z==0)
	{	
	z=1;
	c=1;
}
	else 
	{
	z=0;
	c=0;
}
x=0;
unsigned long long int a=1;
       while(a<=n)
       {
       	x++;
       	a=pow(2,x);
	   }
	   unsigned long long int r=pow(2,x-1);
	   if(r==n)
	   {
	   	n=n/2;
	   }
	   else 
	   {
	   	n=n-r;
	   }
	   
}
if(z==1)
cout<<"Louise"<<endl;
else
 cout<<"Richard"<<endl;
	}
}
