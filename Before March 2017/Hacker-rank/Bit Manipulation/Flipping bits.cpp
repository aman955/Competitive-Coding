#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long ans=0,n;
		int c,k=0,arr[32]={};
		cin>>n;
		while(n!=0)
		{
			c=n%2;
			arr[k]=c;
			k++;
			n=n/2;
		}
		k=0;
		for(int i=0;i<=31;i++)cout<<arr[i];
		cout<<endl;
		for(int i=0;i<=31;i++)
		{
			if(arr[i]==0)
			{
				ans=ans+pow(2,k);
			}
			k++;
		}
		for(int i=0;i<=31;i++)cout<<arr[i];
		cout<<endl;
		
		cout<<ans<<endl;
	}
}
