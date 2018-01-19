#include<bits/stdc++.h>
using namespace std;

int arr[100005]={};
int tree[400005]={};

void build(int node,int start,int end)
{
	if(start==end)
	{
		tree[node]=arr[start];
		return;
	}
	build(2*node+1,start,(start+end)/2);
	build(2*node+2,1+(start+end)/2,end);
	tree[node]=max(tree[2*node+1],tree[2*node+2]);
}

int query(int node,int start,int end,int l,int r)
{
	if(start>end||end<l||start>r)
	return -INT_MAX;
	if(start>=l&&end<=r)
	return tree[node];
	else
	{
		int q1=query(2*node+1,start,(start+end)/2,l,r);
		int q2=query(2*node+2,1+(start+end)/2,end,l,r);
		return max(q1,q2);
	}
}

int main()
{
	int i,k,n;
	cin>>n;
	for(i=0;i<n;i++)scanf("%d",&arr[i]);
	build(0,0,n-1);
	cin>>k;
	for(i=0;i<=n-k;i++)
	{
		printf("%d ",query(0,0,n-1,i,i+k-1));
	}
}
