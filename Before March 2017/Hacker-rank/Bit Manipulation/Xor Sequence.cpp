#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		long long ans=0;
		long long l,r,i,series,a,sevens,c,d,x,y;
		cin>>l>>r;
		c=l%4;
		x=l+4-c;
		d=r%4;
		y=r-d;
		
		for(i=l;i<x;i++)ans=(ans^i);
		for(i=y+1;i<=r;i++)ans=(ans^i);
		
		series=(x-y)/4;
		if(series%2==1)
	     ans=1;
	     
	     int q=0,count=0;
	     
			while(q!=16)
		{
			if(l<=pow(2,q)&&pow(2,q)<=r)
			{
				a=pow(2,q+1);
			ans=(ans^(a-1));
			count++;
			}
			q++;
		}
		sevens=series-count;
		if(sevens%2==1)
		ans=(ans^7);
		cout<<ans<<endl;
	}
}
