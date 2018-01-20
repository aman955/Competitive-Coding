#include<iostream>
using namespace std;

int main()
{
	long long ans=0,n;
	cin>>n;
	while(n!=0)
	{
		if(n%2)
		ans=ans*2;
		n=n/2;
	}
	cout<<ans;
}
