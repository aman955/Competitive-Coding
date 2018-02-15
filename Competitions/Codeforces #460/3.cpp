#include<bits/stdc++.h>
using namespace std;

char arr[2001][2001];

int main()
{
	long long int n,m,k;
	cin>>n>>m>>k;
	long long ans=0,counti,i,j,val=0;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
		cin>>arr[i][j];
		if(arr[i][j]=='.')
		val++;
	   }
	}
	for(i=1;i<=n;i++)
	{
		j=1;

		while(j<=m)
		{
			counti=0;
		while(j!=m+1&&arr[i][j]=='.')
		{
			counti++;
			j++;
		}
		if(j<=m)
		j++;
		if(counti>=k)
		{
			ans=ans+(counti-k+1);
		}
	    }
	}

	
		for(j=1;j<=m;j++)
	{
		i=1;
		
		while(i<=n)
		{
			counti=0;
		while(i!=n+1&&arr[i][j]=='.')
		{
			counti++;
			i++;
		}
		if(i<=n)
		i++;
		if(counti>=k)
		{
			ans=ans+(counti-k+1);
		}
	    }
	}
	if(k==1)
	ans=ans-val;
	cout<<ans<<endl;
	
}
