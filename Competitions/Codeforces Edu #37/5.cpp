#include<bits/stdc++.h>
using namespace std;

int divj[300005]={};
int arr[300005]={};
int tree[700000]={};

void divi()
{
	int i,j;
	
	for(i=1;i<=300000;i++)
	{
		for(j=1;j<=300000;j+=i)
		divj[j]++;
	}
}


void build(int node, int start, int end)
{
    if(start == end)
    {
        // Leaf node will have a single element
        tree[node] = arr[start];
    }
    else
    {
        int mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node, start, mid);
        // Recurse on the right child
        build(2*node+1, mid+1, end);
        // Internal node will have the sum of both of its children
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}

void update(int node, int start, int end, int idx, int val)
{
    if(start == end)
    {
        // Leaf node
        arr[idx] = val;
        tree[node] = val;
    }
    else
    {
        int mid = (start + end) / 2;
        if(start <= idx and idx <= mid)
        {
            // If idx is in the left child, recurse on the left child
            update(2*node, start, mid, idx, val);
        }
        else
        {
            // if idx is in the right child, recurse on the right child
            update(2*node+1, mid+1, end, idx, val);
        }
        // Internal node will have the sum of both of its children
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}


int query(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
    {
        // range represented by a node is completely outside the given range
        return 0;
    }
    if(l <= start and end <= r)
    {
        // range represented by a node is completely inside the given range
        return tree[node];
    }
    // range represented by a node is partially inside and partially outside the given range
    int mid = (start + end) / 2;
    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, end, l, r);
    return (p1 + p2);
}

int main()
{
	int i,n,q;
	cin>>n>>q;
	for(i=0;i<n;i++)
	cin>>arr[i];
	build(1,0,n-1);
	divi();
	int t,l,r;
	for(i=0;i<q;i++)
	{
		cin>>t>>l>>r;
		if(t==1)
		{
			update(1,0,n-1,l,div[r]);
		}
		else 
		{
			long long s=query(1,0,n-1,l,r);
			cout<<s<<endl;
		}
	}
}

