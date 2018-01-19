#include<iostream>
using namespace std;

long long arr[100005]={},parent[100005]={},xori[100005]={};

int main()
{
	long long n,k,i,temp;
	cin>>n>>k;
	for(i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	for(i=2;i<=n;i++)
	{
		cin>>parent[i];
	}
	xori[1]=arr[1];
	parent[1]=0;
	long long int ans=0;
	for(i=2;i<=n;i++)
	{
		ans=0;
		temp=i;
		while(temp!=0)
		{
			ans=ans^arr[temp];
			temp=parent[temp];
		}
		xori[i]=ans;
	}
	long long count=0,xorita;
	if(xori[i]==k)
	count++;

for(i=2;i<=n;i++)
	{
		temp=i;
		xorita=xori[i];
		if(xorita==k)
			count++;
		while(temp!=0)
		{
			if((xorita^xori[temp])==k&&i!=temp)
			count++;
			temp=parent[temp];
		}
		
	}
	cout<<count<<endl;
	
	
}
