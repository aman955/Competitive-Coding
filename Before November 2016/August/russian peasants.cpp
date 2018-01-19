#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long q;
	cin>>q;
   long long k,m,a,b,ang1,ang2,t;
   double x,y,r;
   while(q--)
   {
   	cin>>a>>b>>k>>m;
   	x=a;
   	y=b;
   	
   	r=sqrt(a*a+b*b);
   	m=(y/x)*k;
   	ang1=cos(atan(m));
   	ang1=ang1%m;
   	ang2=sin(atan(m));
   	ang2=ang2%m;
   	r1=r*ang1;
   	r2=r*ang2;
   	t=r1;
   	s=r2;
   	r1=r1%m;
   	r2=r2%m;
   	while(k--)
   	{
   		r1=r1*t;
   		r2=r2*s;
   }
   
   r1=r1%m;
   r2=r
   cout<<r<<"  "<<r<<endl;
   
}
}
