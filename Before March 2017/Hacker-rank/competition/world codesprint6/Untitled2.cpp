#include<iostream>
using namespace std;
#define INF 10000000

class Graph
{
	int V;
	list<pair<int,int>> *adj;
	
public:
	Graph(int V);
	void addEdge(int u,int v,int w);
	
	void shortestPath(int s);
};

Graph::Graph(int V)
{
	this->V=V;
	adj =new list<pair<int, int> >[V];
}

void Graph::addEdge(int u,int v,int w)
{
	adj[u].push_back(make_pair(v,w));
	adj[v].push_back(make_pair(u,w));
}

void Graph::shortestPath(int src)
{
	
	set<pair<int, int> setds;
	
	vactor<int> dist(V,INF);
	
	setds.insert(make_pair(0,src));
	dist[src]=0;
	
	while(!setds.empty())
	{
		pair<int, int> tmp = *(setds.begin());
		setds.erase(setds.begin());
		
		int u =tmp.second;
		
		list<pair<int, int>>::iterator i;
		for(i=adj[u].begin();i!=adj[u].end();i++)
		{
			int v=(*i).first;
			int weight =(*i).second;
			
			if(dist[v]>dist[u]+weight)
			{
				if(dist[v]!=INF)
				setds.erase(setds.find(make_pair(dist[v],v)));
				dist[v]=dist[u]+weight;
				setds.insert(make_pair(dist[v],v));
			}
		}
	}
 } 
 
 5 8
 3 3
 1 1
 1 2
 2 3
 2 4
 3 1
 4 2
 4 4
 5 3
