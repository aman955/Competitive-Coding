#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long t;
	cin>>t;
 long long n,m,a,b,i;
 while(t--)
 {
 	cin>>n;
 	m=sqrt(n);
 	a=floor(m*sqrt(2));
 	b=ceil((m+1)*sqrt(2));
 	for(i=a;i<=b;i++)
 	{
 		if(((i+1)*i)/2==n)
 		{
		 cout<<i<<endl;
 		goto aman;
	 }
 }
 cout<<"-1"<<endl;
 aman:  ;
}
}
