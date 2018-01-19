#include<iostream>
#include<set>
#include<vector>
#define INF 10000000
using namespace std;
int printparent(int parent[],int j)
{
	if(parent[j]==-1)
	return 0;
	else
	printparent(parent,parent[j]);
	cout<<j<<" ";
}

int main()
{
	int n,e,i,x,y,w;
	cin>>n>>e;
	vector< vector< pair<int ,int > > > vec(n+1);
	for(i=1;i<=e;i++)
	{
		cin>>x>>y>>w;
		vec[x].push_back(make_pair(y,w));
		vec[y].push_back(make_pair(x,w));
	}
	
	int src=1;
	set< pair<int,int> > setds;
	vector< vector<int> > ord(n);
	
	vector<int> dist(n,INF);
	setds.insert(make_pair(1,src));
	dist[src]=1;
	int parent[n+1];
	parent[1]=-1;
	
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
                 parent[v]  = u;
				 			}
		
		}
	}
	printparent(parent,n);
	
	
	
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

