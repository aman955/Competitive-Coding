#include<iostream>
using namespace std;

int bin[65]={};

int main()
{
	int n,x;
	cin>>n;
	while(n--)
	{
		cin>>x;
		int i=0;
		while(x!=0)
		{
			bin[i]+=x%2;
			x=x/2;
			i++;
		}
	}
	long long int k=1;
	long long ans=0;
	for(int i=0;i<=64;i++)
	{
		ans+=(k*(bin[i]*(bin[i]-1))/2);
		k=k*2;
	}
	cout<<ans<<endl;
}
