#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		int i=1;
		long long ans=0;
		while(n/pow(5,i)!=0)
		{
			ans=ans+(n/pow(5,i));
			i++;
		}
		cout<<ans<<endl;
	}
}
