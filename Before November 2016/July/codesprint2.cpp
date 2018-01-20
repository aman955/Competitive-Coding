#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	int a[5],i;
	for(i=0;i<5;i++)cin>>a[i];
	int b[5],c,r,j=0;
	for(i=0;i<5;i++)cin>>b[i];
	for(i=0;i<5;i++)
	{		
		c=abs(a[i]-b[i]);
		if(c==0)
		r=0;
		if(c==5)
           	r=5;
	    if(c>5)
		r=10-c;
	    if(c<5&&c>0)
			r=c;	   	
		j=j+r;
	}
	cout<<j;
	
}
