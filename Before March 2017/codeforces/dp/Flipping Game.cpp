#include<iostream>
using namespace std;

int main()
{
	int n,i,j,k,temp1,temp2,points,temp,max=0;cin>>n;
	int a[n+1];
	
	if(n==1)
	{
		cin>>i;
		if(i==1)
		cout<<"0";
		else
		cout<<"1";
		return 0;
	}
	for(i=1;i<=n;i++)
	{
	cin>>a[i];
	
	if(a[i]==1)
	max++;
    }
    if(max==n){cout<<n-1<<endl;
    return 0;
	}
	
	int loki=0;
	for(j=1;j<=n;j++)
	{
		if(a[j]==0)
		{
			points=0;
			temp=j;
		for(k=j;k<n;k++)
		{
			if(points>=0)
			{
				if(a[k+1]==0)
				points++;
				else points--;
				if(points>loki)
		{temp1=j;
			loki=points;
			temp2=k+1;
		}
			}
			else break;
			
		}
		
	    }
	}

	int ans=0;
	for(i=1;i<temp1;i++)
	{
		if(a[i]==1)
		ans++;
	}
	for(i=temp2+1;i<=n;i++)
	{
		if(a[i]==1)
		ans++;
	}
	for(i=temp1;i<=temp2;i++)
	{
		if(a[i]==0)
		ans++;
	}
	
	cout<<ans;
	
}
