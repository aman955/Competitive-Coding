#include<bits/stdc++.h>
using namespace std;

int tree[400005]={};
int lazy[400005]={};



int query(int node,int start,int end,int l,int r)
{
	if(start>end||end<l||start>r)
	return 0;
	if(start>=l&&end<=r)
	return tree[node];
	else
	{
		int q1=query(2*node+1,start,(start+end)/2,l,r);
		int q2=query(2*node+2,1+(start+end)/2,end,l,r);
		return (q1+q2);
	}
}
/* 1
5 3
0 4 5
0 4 5
0 4 5
5
0
1
2
3
4*/
void update_range(int node,int start,int end,int l,int r,int val)
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
		if(start>end||end<l||start>r)
	    return ;
	if(start>=l&&end<=r)
	{
		tree[node]+=(end-start+1)*val;
		if(start!=end)
		{
			lazy[2*node+1]+=val;
			lazy[2*node+2]+=val;
		}
		return ;
	}
	update_range(2*node+1,start,(start+end)/2,l,r,val);
	update_range(2*node+2,1+(start+end)/2,end,l,r,val);
    tree[node]=tree[node*2+1]+tree[node*2+2];
}

int query_range(int node, int start, int end, int l, int r)
 {	
	if(start > end || start > r || end < l) 
	return 0; 

	if(lazy[node] != 0) 
	{
		tree[node] += lazy[node]; 

		if(start != end) 
		{
			lazy[node*2+1] += lazy[node]; 
			lazy[node*2+2] += lazy[node]; 
		}

		lazy[node] = 0; 
	}

	if(start >= l && end <= r)
		return tree[node];

	int q1 = query_range(node*2+1, start, (start+end)/2, l, r); 
	int q2 = query_range(2+node*2, 1+(start+end)/2, end, l, r);
	
	return (q1+q2);
}


int main()
{
	int i,k,a,b,c,n,t;
	cin>>t;
	while(t--)
	{
	scanf("%d%d",&n,&k);
	for(i=1;i<=k;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		update_range(0,0,n-1,a,b,c);
	}
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		scanf("%d",&a);
		printf("%d\n",query_range(0,0,n-1,a,a));
	}
	
memset(lazy,0,sizeof(lazy));
memset(tree,0,sizeof(tree));

   }
}
