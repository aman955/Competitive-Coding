#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,j,i,a,b,w;
		cin>>n>>m;
		vector< pair<int,int> > vec[n+1];
		
		for(i=0;i<m;i++)
		{
			cin>>a>>b>>w;
			vec[a].push_back(make_pair(b,w));
			vec[b].push_back(make_pair(a,w));
		}
		long dist[n+1]={};
		bool visited[n+1]={};
		for(i=0;i<=n;i++)
		dist[i]=INT_MAX;
		dist[1]=0;
		set<pair<int,int> >s;
		s.insert(make_pair(0,1));
		
		while(!s.empty())
		{
			pair<int,int> p= *s.begin();
			s.erase(*s.begin());
			
			int x=p.second;
			int wei=p.first;
			if(visited[x])
			continue;
			visited[x]=true;
			for(i=0;i<vec[x].size();i++)
			{
				int e=vec[x][i].first;
				int w=vec[x][i].second;
				if(dist[x]+w<dist[e])
				dist[e]=dist[x]+w;
				s.insert(make_pair(dist[e],e));
				
			}
			
		}
		int q;
		cin>>q;
		long long ver,time;
		while(q--)
		{
		cin>>ver>>time;
		time=time-dist[ver]*2;
		if(time>=0)
		cout<<time<<endl;
		else
		cout<<0<<endl;
	   }
}
}
