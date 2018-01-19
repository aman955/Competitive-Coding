#include<iostream>
using namespace std;

int tree[200005]={};
int val[200005]={};
int arr[100005]={};



void build(int node,int start,int end)
{
	if(start==end)
	{
		tree[node]=arr[start];
		val[node]=1;
	}
else
{

	int mid=(start+end)/2;
	build(2*node+1,start,mid);
	build(2*node+2,mid+1,end);
	tree[node]=tree[2*node+1]+tree[2*node+2];
	val[node]=val[2*node+1]+val[2*node+2];
}
}

void update(int node,int start,int end,int l,int r)
{
	if(r<start||l>end)
	{
		return ;
	}
	else if(l<=start&&r>=end)
	{
		tree[node]=val[node]-tree[node];
	}
	else
	{
	int mid=(start+end)/2;
	update(2*node+1,start,mid,l,r);
	update(2*node+2,mid+1,end,l,r);
	tree[node]=tree[2*node+1]+tree[2*node+2];
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
	else
	{
	int mid=(start+end)/2;
	int q1=query(2*node+1,start,mid,l,r);
	int q2=query(2*node+2,mid+1,end,l,r);
	return q1+q2;
   }
}

int main()
{
	int n,t,i;
	cin>>n>>t;
	char x;

	build(0,0,n-1);
	int a,b,c;
	while(t--)
	{
		cin>>a>>b>>c;
		

		
		if(a==0)
		{
			update(0,0,n-1,b,c);
		}
		else
		{
		
			cout<<"output "<<query(0,0,n-1,b,c)<<endl;
		}
	
					cout<<"tree ";
		for(i=0;i<=2*n;i++)
		{
			cout<<tree[i]<<" ";
		}
		cout<<endl;
		cout<<"val ";
		for(i=0;i<=2*n;i++)
		{
			cout<<val[i]<<" ";
		}
		cout<<endl<<endl;
	}
	
}
