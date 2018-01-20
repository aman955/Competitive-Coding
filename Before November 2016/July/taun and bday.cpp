#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	long long w,b,x,y,z,k,l;
	while(t--)
	{
		cin>>b>>w;
		cin>>x>>y>>z;
		if(y+z<x)
		{
			x=y+z;
		}
		if(x+z<y)
		{
			y=x+z;
		}
		k=b*x;
		l=w*y;
		cout<<k+l<<endl;
	}
	
}
