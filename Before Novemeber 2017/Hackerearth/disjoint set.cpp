#include<iostream>
#include<vector>
using namespace std;

int parent[1000005],rank[1000005];
char op[1000005][2];

int paren(int x)
{
	if(x!=parent[x])
	parent[x]=paren(parent[x]);
	return (parent[x]);
}

void unioni(int x,int y)
{
	int a=paren(x);
	int b=paren(y);
	if(a==b)
	return;
	
	if(rank[a]>rank[b])
	{
		parent[b]=a;
	}
	else if(rank[a]<rank[b])
	{
		parent[a]=b;
	}
	else
	{
		parent[b]=a;
		rank[a]++;
	}
	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n,k;
		cin>>n>>k;
		for(i=1;i<=n;i++)
		{
			parent[i]=i;
			rank[i]=0;
		}
		int a[n+1],b[n+1];
		
		for(i=1;i<=k;i++)
		{
			cin>>a[i]>>op[i]>>b[i];
			if(op[i][0]=='=')
			{
				unioni(a[i],b[i]);
			}
		}
		for(i=1;i<=n;i++)
		{
			if(op[i][0]=='!')
			{
				if(paren(a[i])==paren(b[i]))
				{
					cout<<"NO"<<endl;
					goto aman;
				}
			}
		}
		cout<<"YES"<<endl;
		aman: ;
		
		
	}
	
}
