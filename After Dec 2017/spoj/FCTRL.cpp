#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	long long n,ans=0;
	while(t--)
	{
		ans=0;
		cin>>n;
		long long int j=5,i=0;
		while(i!=13)
		{
			ans+=n/j;
		i++;
		j=j*5;
		
		}
		cout<<ans<<endl;
	}
}
