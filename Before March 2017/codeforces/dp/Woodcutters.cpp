#include<iostream>
#define mod 1000000007
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int x[n+1],h[n+1];
	for(i=1;i<=n;i++)
	{
		cin>>x[i]>>h[i];
	}
	if(n==1)
	{
		cout<<"1";
		return 0;
	}
	int ans=2,prev=1;
	
	for(i=2;i<=n-1;i++)
	{
		if(x[i]-x[i-1]>h[i])
		{
			ans++;
		}
		else if( x[i+1]-x[i]>h[i])
		{
			x[i]=x[i]+h[i];
			ans++;
		}
	}
	cout<<ans;
}
