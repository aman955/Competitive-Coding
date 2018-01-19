#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n;
		cin>>n;
		int c[n+1],l[n+1];
		for(i=0;i<n;i++)cin>>c[i];
		for(i=0;i<n;i++)cin>>l[i];
		c[n]=-2;
		int temp,j;
		long long cost=0;
		for(i=0;i<n;i++)
		{
			j=l[i];
			temp=i;
			while(c[i]<=c[i+1])
			{
				i++;
				j=j+l[i];
			}
			cost=c[temp]*j+cost;
		}
		cout<<cost<<endl;
	}
}
