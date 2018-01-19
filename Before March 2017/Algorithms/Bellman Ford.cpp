#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct Edge
{
	int src,weight,dest;
};

struct Graph
{
	int V,E;
	
	struct Edge* edge;
};

struct Graph* createGraph(int V,int E)
{
	struct Graph* graph = (struct Graph*)malloc (sizeof (struct Graph));
	graph->V=V;
	graph->E=E;
	
	graph->edge= (struct Edge*)malloc(sizeof(struct Edge));
	return graph;
}

void printarr(int dist[],int n)
{
	cout<<"Vertex distance from source"<<endl;
	for(int i=0;i<n;i++)
	cout<<i<<" "<<dist[i]<<endl;
}

void BellmanFord(struct Graph* graph, int src)
{
	int V=graph->V;
	int E=graph->E;
	int dist[V];
	
	for(int i=0;i<V;i++)dist[i]=INT_MAX;
	dist[src]=0;
	
	
	for(int i=1;i<=V-1;i++)
	{
		for(int j=0;j<E;j++)
		{
			int u=graph->edge[j].src;
			int v=graph->edge[j].dest;
			int w=graph->edge[j].weight;
			if(dist[v]>dist[u]+w&& dist[u]!=INT_MAX)
			{
				dist[v]=dist[u]+w;
			}
		}
	}
	
		for(int j=0;j<E;j++)
		{
			int u=graph->edge[j].src;
			int v=graph->edge[j].dest;
			int w=graph->edge[j].weight;
			if(dist[v]>dist[u]+w&& dist[u]!=INT_MAX)
			{
				cout<<"Negative cycle is there"<<endl;
			}
		}
		printarr(dist,V);
		return ;
}

int main()
{
    /* Let us create the graph given in above example */
    int V = 5;  // Number of vertices in graph
    int E = 8;  // Number of edges in graph
    struct Graph* graph = createGraph(V, E);
 
    // add edge 0-1 (or A-B in above figure)
    graph->edge[0].src = 0;
    graph->edge[0].dest = 1;
    graph->edge[0].weight = -1;
 
    // add edge 0-2 (or A-C in above figure)
    graph->edge[1].src = 0;
    graph->edge[1].dest = 2;
    graph->edge[1].weight = 4;
 
    // add edge 1-2 (or B-C in above figure)
    graph->edge[2].src = 1;
    graph->edge[2].dest = 2;
    graph->edge[2].weight = 3;
 
    // add edge 1-3 (or B-D in above figure)
    graph->edge[3].src = 1;
    graph->edge[3].dest = 3;
    graph->edge[3].weight = 2;
 
    // add edge 1-4 (or A-E in above figure)
    graph->edge[4].src = 1;
    graph->edge[4].dest = 4;
    graph->edge[4].weight = 2;
 
    // add edge 3-2 (or D-C in above figure)
    graph->edge[5].src = 3;
    graph->edge[5].dest = 2;
    graph->edge[5].weight = 5;
 
    // add edge 3-1 (or D-B in above figure)
    graph->edge[6].src = 3;
    graph->edge[6].dest = 1;
    graph->edge[6].weight = 1;
 
    // add edge 4-3 (or E-D in above figure)
    graph->edge[7].src = 4;
    graph->edge[7].dest = 3;
    graph->edge[7].weight = -3;
 
    BellmanFord(graph, 0);
 
    return 0;
}

