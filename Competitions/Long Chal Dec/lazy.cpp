#include<iostream>
using namespace std;

int tree[400005];
int arr[100005];
int lazy[200005];
int temp[100005];



void updateRange(int node, int start, int end, int l, int r, int val)
{
    if(lazy[node] != 0)
    { 
        // This node needs to be updated
  
        tree[node] += (end - start + 1) * lazy[node];    // Update it
      
        if(start != end)
        {
            lazy[node*2] += lazy[node];                  // Mark child as lazy
            lazy[node*2+1] += lazy[node];                // Mark child as lazy
        }
        lazy[node] = 0;                                  // Reset it
    }
    if(start > end or start > r or end < l)              // Current segment is not within range [l, r]
        return;
    if(start >= l and end <= r)
    {
        // Segment is fully within range
        tree[node] += (end - start + 1) * val;
        if(start != end)
        {
            // Not leaf node
            lazy[node*2] ^= val;
            lazy[node*2+1] ^= val;
        }
        return;
    }
    int mid = (start + end) / 2;
    updateRange(node*2, start, mid, l, r, val);        // Updating left child
    updateRange(node*2 + 1, mid + 1, end, l, r, val);   // Updating right child
    tree[node] = tree[node*2] ^ tree[node*2+1];        // Updating root with max value 
}

int queryRange(int node, int start, int end, int l, int r)
{
    if(start > end or start > r or end < l)
        return 0;         // Out of range
    if(lazy[node] != 0)
    {
        // This node needs to be updated
        tree[node] += (end - start + 1) * lazy[node];            // Update it
        if(start != end)
        {
            lazy[node*2] ^= lazy[node];         // Mark child as lazy
            lazy[node*2+1] ^= lazy[node];    // Mark child as lazy
        }
        lazy[node] = 0;                 // Reset it
    }
    if(start >= l and end <= r)             // Current segment is totally within range [l, r]
        return tree[node];
    int mid = (start + end) / 2;
    int p1 = queryRange(node*2, start, mid, l, r);         // Query left child
    int p2 = queryRange(node*2 + 1, mid + 1, end, l, r); // Query right child
    return (p1 + p2);
}




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
	int mid=(start+end)	/2;
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
		cin>>xori[i];
	}
	for(i=1;i<=100000;i++)temp[i]=0;
	arr[0]=xori[0]
	for(i=1;i<n;i++)
	{
		arr[i]=arr[i-1]^arr[i];
	}
	build(0,0,n-1);
	while(q--)
	{
		cin>>a>>b>>c;
		if(a==1)
		{
			updateRange(0,0,n-1,b-1,c);
		}
		else
		{
		
			cout<<temp[]<<endl;
		}
	}
	
}
