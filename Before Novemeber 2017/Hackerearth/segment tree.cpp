#include<bits/stdc++.h>
using namespace std;

int tree[1000]={};
	int arr[]={1,4,5,6,7,10,3,5};
void build(int node,int start,int end)
{
	if(start==end)
	{
		tree[node]=arr[start];
	}
	else 
	{
		int mid=(start+end)/2;
		build(2*node+1,start,mid);
		build(2*node+2,mid+1,end);
		tree[node]=tree[2*node+2]+tree[2*node+1];
	}
}

void update(int node,int val,int idx,int start,int end)
{
	if(start==end)
	{
		arr[idx]=val;
		tree[node]=val;
	}
	else 
	{
		int mid=(start+end)/2;
		if(start<=idx&&idx<=mid)
		{
			update(2*node+1,val,idx,start,mid);
		}
		else
		{
			update(2*node+2,val,idx,mid+1,end);
		}
		tree[node]=tree[2*node+1]+tree[2*node+2];
	}

	}

int query(int node,int l,int r,int start,int end)
{
	if(l>end||r<start)
	return 0;
	else if(l<=start&&end<=r)
	{
		return tree[node];
	}
	else
	{
		int mid=(start+end)/2;
		int p1=query(2*node+1,l,r,start,mid);
		int p2=query(2*node+2,l,r,mid+1,end);
		return p1+p2;
	}
	
}

int main()
{

	build(0,0,7);
	int i,n=8,a,b;
	for(i=0;i<=50;i++)
	{
		cin>>a>>b;
		cout<<query(0,a,b,0,7)<<endl;
		
	}
}
