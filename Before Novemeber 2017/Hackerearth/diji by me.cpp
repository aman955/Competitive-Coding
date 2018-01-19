#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,a,b,i,w,t,e;
	cin>>n>>e;
	vector< pair<int,int> > vec[n+1];
	bool visited[n+1]={};
	int dist[n+1];
	for(i=0;i<e;i++)
	{
		cin>>a>>b>>w;
		vec[a].push_back(make_pair(b,w));
		vec[b].push_back(make_pair(a,w));
	}
	for(i=0;i<=n;i++)
	dist[i]=0;
	int src,dest,pass;
	cin>>src>>dest>>pass;
	set<pair<int,int> > s;
	s.insert(make_pair(0,src));
	dist[src]=0;
	while(!s.empty())
	{
		pair<int,int> p=*s.rbegin();
		s.erase(*s.rbegin());
		int e=p.second;
		int weigh= p.first;
		if(visited[e])
		continue;
		visited[e]=true;
		
		for(i=0;i<vec[e].size();i++)
		{
			int u=vec[e][i].first;
			int w=vec[e][i].second;
			if(dist[e]+w>dist[u])
			{
				dist[u]=dist[e]+w;
			}
			s.insert(make_pair(dist[u],u));
		}
	}
	cout<<dist[dest]<<endl;
	
}
