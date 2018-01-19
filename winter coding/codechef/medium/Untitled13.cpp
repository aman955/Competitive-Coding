#include <bits/stdc++.h>
#define MAX 400005
 
int arr[MAX];
int tree[MAX];  
int lazy[MAX];
 
 
void updateRangeUtil(int si, int ss, int se, int us,
                     int ue)
{
     if (lazy[si] != 0)
    {
        tree[si] = se-ss+1-tree[si];
        if (ss != se)
        { 
            lazy[si*2+1] ^= 1;
            lazy[si*2+2] ^= 1;
        }
 
        lazy[si] = 0;
    }
    if (ss>se || ss>ue || se<us)
        return ;
 
    if (ss>=us && se<=ue)
    {
        tree[si] = se-ss+1-tree[si];
 
        if (ss != se)
        {
            lazy[si*2 + 1]   ^= 1;
            lazy[si*2 + 2]   ^= 1;
        }
        return;
    }
 
    int mid = (ss+se)/2;
    updateRangeUtil(si*2+1, ss, mid, us, ue);
    updateRangeUtil(si*2+2, mid+1, se, us, ue);
 
    tree[si] = tree[si*2+1] + tree[si*2+2];
}
 
void updateRange(int n, int us, int ue)
{
   updateRangeUtil(0, 0, n-1, us, ue);
}
 
int getSumUtil(int ss, int se, int qs, int qe, int si)
{
 
    if (lazy[si] != 0)
    {
        tree[si] = se-ss+1-tree[si];
        if (ss != se)
        { 
            lazy[si*2+1] ^= 1;
            lazy[si*2+2] ^= 1;
        }
 
        lazy[si] = 0;
    }
    if (ss>se || ss>qe || se<qs)
        return 0;
 
    if (ss>=qs && se<=qe)
        return tree[si];
 
    int mid = (ss + se)/2;
    return getSumUtil(ss, mid, qs, qe, 2*si+1) +
           getSumUtil(mid+1, se, qs, qe, 2*si+2);
}
 
int getSum(int n, int qs, int qe)
{
    
    if (qs < 0 || qe > n-1 || qs > qe)
    {
        printf("Invalid Input");
        return -1;
    }
 
    return getSumUtil(0, n-1, qs, qe, 0);
}
 
void constructSTUtil(int arr[], int ss, int se, int si)
{
    
    if (ss > se)
        return ;
 
    if (ss == se)
    {
        tree[si] = arr[ss];
        return;
    }
 
    int mid = (ss + se)/2;
    constructSTUtil(arr, ss, mid, si*2+1);
    constructSTUtil(arr, mid+1, se, si*2+2);
 
    tree[si] = tree[si*2 + 1] + tree[si*2 + 2];
}
 
void constructST(int arr[], int n)
{
    constructSTUtil(arr, 0, n-1, 0);
}
 
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    constructST(arr, n);
 	int a,b,c;
 	while(k--){
 		scanf("%d %d %d",&a,&b,&c);
	 	if(a==0)
    		updateRange(n, b, c);
    		
    	else{
 
   			int a=getSum(n, b, c);
   			printf("%d\n",a);
 	}
        }
 
    return 0;
}
