#include<iostream>
using namespace std;

int main()
{
	long apples=0,oranges=0,i,d;
	long s,t;
	cin>>s>>t;
	long a,b;
	cin>>a>>b;
	long m,n;
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		cin>>d;
		if(d>=s-a&&d<=t-a)
		apples++;
	}
	
	for(i=0;i<n;i++)
	{
		cin>>d;
		if(-d>=b-t&&-d<=b-s)
		oranges++;
	}
	cout<<apples<<endl<<oranges<<endl;
	
}
