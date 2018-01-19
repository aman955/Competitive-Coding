#include<bits/stdc++.h>
using namespace std;


long long  arr[100005]={},tree[400010]={},lazy[400010]={};

void build(long long node,long long start,long long end)
{
	if(start==end)
	{
		tree[node]=arr[start];
		return;
	}
	build(2*node+1,start,(start+end)/2);
	build(2*node+2,1+(start+end)/2,end);
	tree[node]=tree[2*node+1]+tree[2*node+2];
}

void update_range(long long node,long long start,long long end,long long l,long long r,long long value)
{
	if(lazy[node]!=0)
	{
		tree[node]+=(end-start+1)*lazy[node];
		if(start!=end)
		{
			lazy[2*node+1]+=lazy[node];
			lazy[2*node+2]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(start>end||start>r||end<l)
	{
		return ;
	}
	if(start>=l&&end<=r)
	{
		tree[node]+=(end-start+1)*value;
		if(start!=end)
		{
				lazy[2*node+1]+=value;
			lazy[2*node+2]+=value;
		}
	return ;	
	}
	update_range(2*node+1,start,(start+end)/2,l,r,value);
	update_range(2*node+2,1+(start+end)/2,end,l,r,value);
	tree[node]=tree[2*node+1]+tree[2*node+2];
	
}


long long query_range(long long node,long long start,long long end,long long l,long long r)
{
	if(start>end||start>r||end<l)
	return 0;
	if(lazy[node]!=0)
	{
		tree[node]+=(end-start+1)*lazy[node];
		if(start!=end)
		{
			lazy[2*node+1]+=lazy[node];
			lazy[2*node+2]+=lazy[node];
		}
		lazy[node]=0;
	}
	if(start>=l&&end<=r)
	return tree[node];
	
	long long q1=query_range(2*node+1,start,(start+end)/2,l,r);
	long long q2=query_range(2*node+2,1+(start+end)/2,end,l,r);
	return q1+q2;
}

int main()
{
	long long q,n,i,a,b,c,d,t;
	cin>>t;
	while(t--)
	{
	memset(arr,0,sizeof(arr));
	memset(tree,0,sizeof(tree));
	memset(lazy,0,sizeof(lazy));
	cin>>n;
	cin>>q;
	while(q--)
	{
		scanf("%lld",&a);
          
		if(a==0)
		{
		
				scanf("%lld %lld %lld",&b,&c,&d);
			update_range(0,0,n-1,b-1,c-1,d);
		}
		else
		{
		scanf("%lld %lld",&b,&c);
		printf("%lld\n",query_range(0,0,n-1,b-1,c-1));
		}
	}
}
}
