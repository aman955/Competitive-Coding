#include<iostream>
#include<set>
#include<queue>
using namespace std;

void unioni(int u,int v,int arr[],int n)
{
	int temp=arr[u];
	for(int i=1;i<=n;i++)
	{
		if(arr[i]==temp)
		arr[i]=arr[v];
	}
}

void initialize(int arr[],int n)
{
	for(int i=1;i<=n;i++)
	arr[i]=i;
}

int main()
{
	int n,e,a,w,b,i;
	cin>>n>>e;
	vector< pair<int,int> > vec[n+1];
	bool visited[n+1]={};
	set< pair<int ,pair<int,int> > > s;
	for(i=1;i<=e;i++)
	{
		cin>>a>>b>>w;
		vec[a].push_back(make_pair(b,w));
		vec[b].push_back(make_pair(a,w));
		s.insert(make_pair(w,make_pair(a,b)));
	}
	int arr[n+1];
	initialize(arr,n);
	long sum=0,dist,u,v;
	set<pair<int, pair<int,int> > >::iterator p;
	while(!s.empty())
	{
		p = s.begin();
		s.erase(s.find(*p));
		dist=(*p).first;
		u=(*p).second.first;
		v=(*p).second.second;
		if(arr[u]!=arr[v])
		{
			unioni(u,v,arr,n);
			sum+=dist;
		}
		
	}
	cout<<sum<<endl;
}
/* 
5 7
1 2 1
1 5 4
1 3 5
1 4 3
3 4 6
2 3 7
5 4 2
*/
