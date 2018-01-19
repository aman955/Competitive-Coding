#include<bits/stdc++.h>
using namespace std;

vector<long long> tree[400005];
long long arr[100005]={};


void build(long long node,long long start,long long end)
{
	if(start==end)
	{
		tree[node].push_back(arr[start]);
		return ;
	}
	build(2*node+1,start,(start+end)/2);
	build(2*node+2,1+(start+end)/2,end);
	long long i=0;
	long long j=0;
while(i<tree[2*node+1].size()&&j<tree[2*node+2].size())
{	
	if(tree[2*node+1][i]<=tree[2*node+2][j])
	{
		tree[node].push_back(tree[2*node+1][i]);
		i++;
	}
	else
	{
			tree[node].push_back(tree[2*node+2][j]);
			j++;
	}
}
while(i<tree[2*node+1].size())
{
		tree[node].push_back(tree[2*node+1][i]);
		i++;
}
while(j<tree[2*node+2].size())
{
		tree[node].push_back(tree[2*node+2][j]);
		j++;
}

}

long long  query(long long node,long long start,long long end,long long l,long long r,long long val)
{
	if(start>end||end<l||start>r)
	return 0;
	else if(start>=l&&end<=r)
	{
		long long j=0,a=0,b=tree[node].size()-1;
		 while (a <= b)
  {
    long long m = a + (b-a)/2;
  
    if (tree[node][m] <= val) 
        {
		a= m + 1; 
        j=m+1;
	    }
    else
         {
		 b=m-1; 
	    }
  
  }

  return tree[node].size()-j;

	}
	else
	{
	long long q1=query(2*node+1,start,(start+end)/2,l,r,val);
	long long q2=query(2*node+2,1+(start+end)/2,end,l,r,val);
	return (q1+q2);
    }
}

/* 5 5 1 2 3 4*/
int main()
{

	long long int n,i,j;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	scanf("%lld",&arr[i]);
	build(0,0,n-1);
long long q;
scanf("%lld",&q);
long long a,b,c;
while(q--)
{
	scanf("%lld%lld%lld",&a,&b,&c);
	printf("%lld\n",query(0,0,n-1,a-1,b-1,c));
}
}

