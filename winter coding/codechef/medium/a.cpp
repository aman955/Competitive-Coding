/**
 * In this code we have a very large array called arr, and very large set of operations
 * Operation #1: Increment the elements within range [i, j] with value val
 * Operation #2: Get max element within range [i, j]
 * Build tree: build_tree(1, 0, N-1)
 * Update tree: update_tree(1, 0, N-1, i, j, value)
 * Query tree: query_tree(1, 0, N-1, i, j)
 */

#include<iostream>
#include<algorithm>
using namespace std;

#include<string.h>
#include<math.h> 

#define N 20
#define MAX (1+(1<<6)) // Why? :D
#define inf 0x7fffffff

int arr[400005]={};
int tree[400005]={};
int lazy[400005]={};

/**
 * Build and init tree
 */
 
void build_tree(int node, int start, int end)
 {
  	if(start > end) return; // Out of range
  	
  	if(start == end) { // Leaf node
    	tree[node] = arr[start]; // Init value
		return;
	}
	
	build_tree(node*2+1, start, (start+end)/2); // Init left child
	build_tree(node*2+2, 1+(start+end)/2, end); // Init right child
	
	tree[node] = tree[node*2+2]+tree[node*2+1]; // Init root value
}

/**
 * Increment elements within range [i, j] with value value
 */
void update_tree(int node, int start, int end, int l, int r) {
  
  	if(lazy[node] != 0)  // This node needs to be updated
   	{
	    tree[node] = end-start+1-tree[node]; // Update it

		if(start != end)
		{
			lazy[node*2+1] ^= 1; // Mark child as lazy
    		lazy[node*2+2] ^= 1; // Mark child as lazy
		}

   		lazy[node] = 0; // Reset it
  	}
  
	if(start > end || start > r || end < l) // Current segment is not within range [i, j]
		return;
    
  	if(start >= l && end <= r)  // Segment is fully within range
    {
		tree[node] = end-start+1-tree[node];

		if(start != end)  // Not leaf node
		{
			lazy[node*2+1] ^= 1;
			lazy[node*2+2] ^= 1;
		}
    		return;
	}

	update_tree(node*2+1, start, (start+end)/2, l, r); // Updating left child
	update_tree(node*2+2, 1+(start+end)/2, end, l, r); // Updating right child

	tree[node] = (tree[node*2+1]+tree[node*2+2]); // Updating root with max value
}

/**
 * Query tree to get max element value within range [i, j]
 */
int query_tree(int node, int start, int end, int l, int r)
 {	
	if(start > end || start > r || end < l) 
	return 0; // Out of range

	if(lazy[node] != 0)  // This node needs to be updated
	{
		tree[node] = end-start+1-tree[node]; // Update it

		if(start != end) 
		{
			lazy[node*2+1] ^= 1; // Mark child as lazy
			lazy[node*2+2] ^= 1; // Mark child as lazy
		}

		lazy[node] = 0; // Reset it
	}

	if(start >= l && end <= r) // Current segment is totally within range [i, j]
		return tree[node];

	int q1 = query_tree(node*2+1, start, (start+end)/2, l, r); // Query left child
	int q2 = query_tree(node*2+2, 1+(start+end)/2, end, l, r); // Query right child

	int res = (q1+q2); // Return final result
	
	return res;
}

int main() {
	
	int n,t,i;
	cin>>n>>t;


	build_tree(0,0,n-1);
	int a,b,c;
	while(t--)
	{
		cin>>a>>b>>c;

		if(a==0)
		{
			update_tree(0,0,n-1,b,c);
		}
		else
		{
			cout<<query_tree(0,0,n-1,b,c)<<endl;
		}
    }

}
