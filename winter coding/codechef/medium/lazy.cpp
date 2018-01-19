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

int arr[N];
int tree[MAX];
int lazy[MAX];

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
	
	build_tree(node*2, start, (start+end)/2); // Init left child
	build_tree(node*2+1, 1+(start+end)/2, end); // Init right child
	
	tree[node] = max(tree[node*2], tree[node*2+1]); // Init root value
}

/**
 * Increment elements within range [i, j] with value value
 */
void update_tree(int node, int start, int end, int l, int r, int value) {
  
  	if(lazy[node] != 0)  // This node needs to be updated
   	{
	    tree[node] += lazy[node]; // Update it

		if(start != end)
		{
			lazy[node*2] += lazy[node]; // Mark child as lazy
    		lazy[node*2+1] += lazy[node]; // Mark child as lazy
		}

   		lazy[node] = 0; // Reset it
  	}
  
	if(start > end || start > r || end < l) // Current segment is not within range [i, j]
		return;
    
  	if(start >= l && end <= r)  // Segment is fully within range
    {
		tree[node] += value;

		if(start != end)  // Not leaf node
		{
			lazy[node*2] += value;
			lazy[node*2+1] += value;
		}
    		return;
	}

	update_tree(node*2, start, (start+end)/2, l, r, value); // Updating left child
	update_tree(1+node*2, 1+(start+end)/2, end, l, r, value); // Updating right child

	tree[node] = max(tree[node*2], tree[node*2+1]); // Updating root with max value
}

/**
 * Query tree to get max element value within range [i, j]
 */
int query_tree(int node, int start, int end, int l, int r)
 {	
	if(start > end || start > r || end < l) 
	return -inf; // Out of range

	if(lazy[node] != 0)  // This node needs to be updated
	{
		tree[node] += lazy[node]; // Update it

		if(start != end) 
		{
			lazy[node*2] += lazy[node]; // Mark child as lazy
			lazy[node*2+1] += lazy[node]; // Mark child as lazy
		}

		lazy[node] = 0; // Reset it
	}

	if(start >= l && end <= r) // Current segment is totally within range [i, j]
		return tree[node];

	int q1 = query_tree(node*2, start, (start+end)/2, l, r); // Query left child
	int q2 = query_tree(1+node*2, 1+(start+end)/2, end, l, r); // Query right child

	int res = max(q1, q2); // Return final result
	
	return res;
}

int main() {
	for(int i = 0; i < N; i++) arr[i] = 1;

	build_tree(1, 0, N-1);

	memset(lazy, 0, sizeof lazy);

	update_tree(1, 0, N-1, 0, 6, 5); // Increment range [0, 6] by 5
	update_tree(1, 0, N-1, 7, 10, 12); // Incremenet range [7, 10] by 12
	update_tree(1, 0, N-1, 10, N-1, 100); // Increment range [10, N-1] by 100

	cout << query_tree(1, 0, N-1, 0, N-1) << endl; // Get max element in range [0, N-1]
}
