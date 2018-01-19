#include<iostream>
using namespace std;

int main()
{
		int t;
		cin>>t;
		while(t--)
		{
			int n;
			cin>>n;
		    long int x;
			for(int i=0;i<n;i++)cin>>x;
			long ans=n*(n-1);
			ans/=2;
			cout<<ans<<endl;
		}
}
