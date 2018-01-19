#include<iostream>
using namespace std;

int main()
{
	long t;
	cin>>t;
	long long  n,x;
	while(t--)
	{
		cin>>n>>x;
		if(n%x==0)
		{
			cout<<x<<endl;
		}
		else
		cout<<n%x<<endl;
	}
}
