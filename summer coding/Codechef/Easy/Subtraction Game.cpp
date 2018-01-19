#include<iostream>
using namespace std;


int gcd(int a,int b)
{
	if(a==0)
	return b;
	return gcd(b%a,a);
}

int main()
{
	int t,i,ans;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		cin>>arr[i];
		ans=arr[0];
		for(i=1;i<n;i++)
		{
			ans=gcd(ans,arr[i]);
		}
		cout<<ans<<endl;
	}
}
