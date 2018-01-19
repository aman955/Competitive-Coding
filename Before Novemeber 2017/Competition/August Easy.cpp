#include<iostream>
using namespace std;

#define mod 1000000007

long long int arr[100005];

int main()
{
	arr[1]=2;
	long long ans=1;
	for(int i=2;i<100005;i++)
	{
		ans=(ans%mod*arr[i-1]%mod)%mod;
		arr[i]=(ans+1)%mod;
	}
	int t;
	cin>>t;
	int x;
	while(t--)
	{
	cin>>x;
	for(int i=1;i<=x;i++)cout<<arr[i]<<" ";
	cout<<endl;	
	}
}
