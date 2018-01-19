#include<bits/stdc++.h>
using namespace std;
#define ll long long int

 
ll inf=pow(10,17);
 
ll dp[100000][2];
 
vector<int> tree[60000];
int P[100000], C[100000];
int arr[100002];
int parent[100000];
bool visited[100000];
int n;
 
bool compare(int x,int y)
{
	if(dp[x][0]-dp[x][1]<=dp[y][0]-dp[y][1])
	return true;
	return false;
}

 
//void capture(vector<int> tree[],int u,bool visited[])
void capture(int u,bool visited[])
{
	visited[u]=true;
	int i,deg=0,v;
	ll a,b;
 
	for(i=0;i<tree[u].size();i++)
	{
		if(!visited[tree[u][i]])
		capture(tree[u][i],visited);
	}
 
	for(i=0;i<tree[u].size();i++)
	{
	    v=tree[u][i];
		if(v!=parent[u])
		{
		 arr[deg++]=v;	
		}
	}
	sort(arr,arr+deg,compare);
	a=0;
	for(i=0;i<tree[u].size();i++)
	{
		v=tree[u][i];
		if(v!=parent[u])
		a+=dp[v][1];
	}
	a+=P[u];
 
//	cout<<u<<" :a "<<a<<" ";
	b=0;
 
/*	for(i=0;i<C[u];i++)
	{
	 v=arr[i];  b+=	dp[v][0];
	}
	for(i=C[u];i<deg;i++)
	{
		v=arr[i]; b+=dp[v][1];
	}
	dp[u][0]=min(a,b);  b=0;
 
	for(i=0;i<C[u]-1;i++)
	{
	 v=arr[i];  b+=	dp[v][0];
	}
	for(i=C[u]-1;i<deg;i++)
	{
		v=arr[i]; b+=dp[v][1];
	}
	dp[u][1]=min(a,b);*/
 
	if(deg<C[u]||deg==0)
	b=inf;
	else
	{
		for(i=0;i<C[u];i++)
	{
	 v=arr[i];  b+=dp[v][0];
	}
	for(i=C[u];i<deg;i++)
	{
		v=arr[i]; b+=dp[v][1];
	}
	}
	  dp[u][0]=min(a,b);  b=0;
 
	 for(i=0;i<C[u]-1;i++)
	{
	 v=arr[i];  b+=	dp[v][0];
	}
	for(i=C[u]-1;i<deg;i++)
	{
		v=arr[i]; b+=dp[v][1];
	}
	dp[u][1]=min(a,b); 
 
 
//	printf("dp(%d,0)=%lld dp(%d,1)=%lld\n",u,dp[u][0],u,dp[u][1]);
}
 
void dfs(int u,int p,bool visited[])
{
	visited[u]=true; parent[u]=p;
	int i;
	for(i=0;i<tree[u].size();i++)
	{
		if(!visited[tree[u][i]])
		dfs(tree[u][i],u,visited);
	}
}
 
 
 
int main()
{
	int tests; int i;
	cin>>tests;
 
	for(int t=0;t<tests;t++)
	{
		cin>>n;
		int i,u,v;
 
 
	for(i=0;i<n-1;i++)
	{
		cin>>u>>v;
		tree[u].push_back(v);
		tree[v].push_back(u);
	}
	for(i=1;i<=n;i++)
	cin>>P[i];
	for(i=1;i<=n;i++)
	cin>>C[i];
 
	    for(i=0;i<=n;i++)visited[i]=false;
		dfs(1,0,visited);
		for(i=0;i<=n;i++)visited[i]=false;
		capture(1,visited);
		printf("%lld\n",dp[1][0]);	
	}
	return 0;
}
