#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#define ll long long int
#define leftc(i) 2*i
#define rightc(i) 2*i+1
 
using namespace std;
int v[100005];
int arr[500005];
int lazy[500005];
 
void update(int qlow,int qhigh,int low,int high,int pos,int par)
{
	if(lazy[pos]!=0)
	{
		int par = lazy[pos]%2;
		if(par%2==1)
		{
			arr[pos] = (high-low+1)-arr[pos];
			if(low!=high)
			{
				lazy[leftc(pos)]+=lazy[pos];
				lazy[rightc(pos)]+=lazy[pos];
			}
		}
		lazy[pos]=0;
	}
	if(low>high)
	{
		return;
	}
	if(low>qhigh || high<qlow)
	{
		return;
	}
	if(qlow<=low && high<=qhigh)
	{
		if(par%2!=0)
		{
			arr[pos] = (high-low+1) - arr[pos];
			if(low!=high)
			{
				lazy[leftc(pos)]+=par;
				lazy[rightc(pos)]+=par;
			}
		}
		return;
	}
	int mid = (low+high)/2;
	update(qlow,qhigh,low,mid,leftc(pos),par);
	update(qlow,qhigh,mid+1,high,rightc(pos),par);
	arr[pos] = arr[leftc(pos)]+arr[rightc(pos)];
}
 
int query(int qlow,int qhigh,int low,int high,int pos)
{
	if(lazy[pos]!=0)
	{
		int par = lazy[pos]%2;
		if(par%2==1)
		{
			arr[pos] = (high-low+1)-arr[pos];
			if(low!=high)
			{
				lazy[leftc(pos)]+=lazy[pos];
				lazy[rightc(pos)]+=lazy[pos];
			}
		}
		lazy[pos]=0;
	}
	if(low>high)
	{
		return 0;
	}
	if(low>qhigh || high<qlow)
	{
		return 0;
	}
	if(qlow<=low && high<=qhigh)
	{
		return arr[pos];
	}
	int mid = (low+high)/2;
	return query(qlow,qhigh,low,mid,leftc(pos))+query(qlow,qhigh,mid+1,high,rightc(pos));
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	int n,q;
	cin>>n>>q;
	memset(v,0,sizeof(v));
	memset(arr,0,sizeof(arr));
	memset(lazy,0,sizeof(lazy));
	while(q--)
	{
		int type,a,b;
		cin>>type>>a>>b;
		if(type==0)
		{
			update(a+1,b+1,1,n,1,1);
		}
		else
		{
			cout<<query(a+1,b+1,1,n,1)<<endl;
		}
	}
	return 0;
} 
