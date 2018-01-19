#include<iostream>
using namespace std;

int main()
{
	int t,i,j;
	cin>>t;
	while(t--)
	{
		int n,x,count=0;
		cin>>n;
		
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				cin>>x;
				if(!x)
				count++;
			}
		}
		if(count<2)
		{
			cout<<n-1<<endl;
			goto aman;
		}
		if(count>=n*(n-1))
		{
			cout<<0<<endl;
			goto aman;
		}
		
		for(i=2;i<=n-1;i++)
		{
			if(count<i*(i+1))
			{
				cout<<n-i<<endl;
				goto aman;
			}
		}
		
		
		aman: ;
	}
}
