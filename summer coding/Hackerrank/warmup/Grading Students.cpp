#include<iostream>
using namespace std;

int main()
{
	int t,i,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
	      if(n>=38)
		{
			if(n%5==3||n%5==4)
			{
				n=n+5-n%5;
			}
			
		}
		cout<<n;
	}
}
