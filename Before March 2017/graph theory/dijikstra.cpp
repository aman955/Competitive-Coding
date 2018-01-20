#include<iostream>
#include<set>
#include<vector>
#define INF 10000000
using namespace std;

int main()
{
	int n,e,i,x,y,w;
	cin>>n>>e;
	vector< vector< pair<int,int > > > vec(n);
	for(i=0;i<e;i++)
	{
		cin>>x>>y>>w;
		vec[x].push_back(make_pair(y,w));
		vec[y].push_back(make_pair(x,w));
	}
	
	int src=0;
	set< pair<int,int> > setds;
	
	vector<int> dist(n,INF);
	setds.insert(make_pair(0,src));
	dist[src]=0;
	
	while(!setds.empty())
	{
		pair<int,int> tmp = *(setds.begin());
		setds.erase(setds.begin());
		
		int u=tmp.second;
		
		for(i=0;i<vec[u].size();i++)
		{
			int v=vec[u][i].first;
			int weight=vec[u][i].second;
			
			if(dist[v]>dist[u]+weight)
			{
				
				if(dist[v]!=INF)
				setds.erase(setds.find(make_pair(dist[v],v)));
				
				dist[v]=dist[u]+weight;
				setds.insert(make_pair(dist[v],v));
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<i<<" "<<dist[i]<<endl;
	}
	
}
/*9 14
0 1 4
0 7 8
1 2 8
1 7 11
2 3 7
2 8 2
2 5 4
3 4 9
3 5 14
4 5 10
5 6 2
6 7 1
6 8 6
7 8 7*/

