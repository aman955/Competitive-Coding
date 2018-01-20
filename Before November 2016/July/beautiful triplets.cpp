#include<iostream>
using namespace std;

int main()
{
	int n,i,c,l,d,k=0,ans=0,j;
	cin>>n>>d;
	int a[n];
	for(i=0;i<n;i++)cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		c=i;
		k=0;
		l=c;
		for(j=c+1;j<n&&c<n;j++)
		{
			if(a[c]+d==a[j])
			{
				k++;
				c=j;
			}
			if(k==2)
			{
				ans++;
				goto aman;
			}
		}
		aman: ;
	}
	cout<<ans;

}
