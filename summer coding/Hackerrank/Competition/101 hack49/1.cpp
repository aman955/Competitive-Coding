#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	long long x,ans=1;
	while(n--)
	{
		cin>>x;
		ans=ans*x;
	}
	cout<<ans/1024;
}
