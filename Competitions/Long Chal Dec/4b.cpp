#include<iostream>
using namespace std;

int arr[100005];

int main()
{
	int i,n,q,a,b,c,z;
	cin>>n>>q;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	xori[0]=0;
	for(i=1;i<n;i++)
	{
		xori[i]=xori[i-1]^arr[i];
	}

	while(q--)
	{
		cin>>a>>b>>c;
		if(a==1)
		{
		  arr[b-1]=c;
		}
		else
		{
			int count=0;
			int temp=0;
			for(i=0;i<=b-1;i++)
			{
				temp=temp^arr[i];
			if(temp==c)
			count++;
			
		    }
			cout<<count<<endl;
		}
	}
	
	
}
