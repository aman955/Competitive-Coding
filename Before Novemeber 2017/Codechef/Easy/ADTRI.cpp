#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int i,a,x;
		for(a=1;a<=1000000;a++)
		{
		for(i=1;i<a;i++)
		{
			x=a*a-i*i;
			x=sqrt(x);
			if(x*x+i*i==a*a)
			{
				cout<<a<<" "<<"YES"<<endl;
				break;
			}
		}
		
	    }
	}
}
