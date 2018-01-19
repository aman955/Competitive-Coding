#include<iostream>
using namespace std;

int tree[400005];
int arr[100005];

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
	tree[node]=tree[2*node+1]^tree[2*node+2];
    }
}

void update(int node,int start,int end,int idx,int val)
{
	if(start==end)
	{
		arr[idx]=val;
		tree[node]=val;
	}
	else
	{
	int mid=(start+end)/2;
	if(idx<=mid&&start<=idx)
	{
		update(2*node+1,start,mid,idx,val);
	}
	else
	{
		update(2*node+2,mid+1,end,idx,val);
	}
	tree[node]=tree[node*2+1]^tree[node*2+2];
}
}

int query(int node,int start,int end,int l,int r)
{
	if(r<start||l>end)
	{
		return 0;
	}
	else if(l<=start&&r>=end)
	{
		return tree[node];
	}
	int mid=(start+end)/2;
	int q1=query(2*node+1,start,mid,l,r);
	int q2=query(2*node+2,mid+1,end,l,r);
	return q1^q2;
}

int main()
{
	int i,n,q,a,b,c,z;
	cin>>n>>q;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	build(0,0,n-1);
	while(q--)
	{
		cin>>a>>b>>c;
		if(a==1)
		{
			update(0,0,n-1,b-1,c);
		}
		else
		{
			int count=0;
			for(i=0;i<=b-1;i++)
			{
			 
			if(query(0,0,n-1,0,i)==c)
			{
				count++;
			}
			
		    }
			cout<<count<<endl;
		}
	}
	
}
