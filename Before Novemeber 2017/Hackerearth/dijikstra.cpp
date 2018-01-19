#include<iostream>
#include<vector>
#include<limits>
using namespace std;

int main()
{
	int n,e,a,b,i;
	cin>>n>>e;
	vector<int> vec[n+1];
	bool visited[n+1]={};
	for(i=1;i<=e;i++)
	{
		cin>>a>>b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	int source;
	cin>>source;
	
	int distance[n+1];
	for(i=1;i<=n;i++)
	distance[i]=INT_MAX;
	distance[source]=0;
	
	
	
}

