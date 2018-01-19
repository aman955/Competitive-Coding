#include<iostream>
#include<climits>
using namespace std;
long long int t=1,node1,node2;
struct nodi
{
 long long int presum=0,sufsum=0,maxsum=0,totsum=0;
};

long long arr[50005]={};
struct nodi tree[200010],p;

void build(long long node,long long start,long long end)
{
	if(start==end)
	{
		tree[node].maxsum=arr[start];
		tree[node].presum=arr[start];
		tree[node].sufsum=arr[start];
		tree[node].totsum=arr[start];
		return ;
	}
	build(2*node+1,start,(start+end)/2);
	build(2*node+2,1+(start+end)/2,end);
	tree[node].presum=max(tree[2*node+1].presum,tree[2*node+1].totsum+tree[2*node+2].presum);
	tree[node].sufsum=max(tree[2*node+2].sufsum,tree[2*node+2].totsum+tree[2*node+1].sufsum);
	tree[node].totsum=tree[2*node+1].totsum+tree[2*node+2].totsum;
	tree[node].maxsum=max(tree[2*node+1].sufsum+tree[2*node+2].presum,max(tree[2*node+1].maxsum,tree[2*node+2].maxsum));
}

void query(long long node,long long start,long long end,long long l,long long r)
{
	if(start>r||end<l||start>end)
	{
		return ;
	}
	else if(start>=l && end<=r)
	{
		long long a,b,c,d;
	a=p.presum;
	b=p.sufsum;
	c=p.totsum;
	d=p.maxsum;
	p.presum=max(a,b+tree[node].presum);
	p.sufsum=max(tree[node].sufsum,tree[node].totsum+b);
	p.totsum=c+tree[node].totsum;
    p.maxsum=max(b+tree[node].presum,max(d,tree[node].maxsum));

    return ;
	}
	query(2*node+1,start,(start+end)/2,l,r);
	query(2*node+2,1+(start+end)/2,end,l,r);
}
int main()
{
long long i,n;
cin>>n;
for(i=0;i<n;i++)cin>>arr[i];
build(0,0,n-1);
long long q,a,b;
cin>>q;

while(q--)
{

	p.presum=-100000;
	p.sufsum=-100000;
	p.totsum=-100000;
	p.maxsum=-100000;
	scanf("%lld %lld",&a,&b);
	query(0,0,n-1,a-1,b-1); 
	printf("%lld\n",p.maxsum);
}
}
