#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i,j,to,from,weight;
	cin>>n>>m;
	vector<int> vec[m+1];
	int dist[n+1]={};
	for(i=0;i<=n;i++)
	{
		dist[i]=INT_MAX;
	}
	for(i=0;i<m;i++)
	{
		cin>>from>>to>>weight;
		vec[i].push_back(from);
		vec[i].push_back(to);
		vec[i].push_back(weight);
	}
	dist[1]=0;
	
	for(i=0;i<n-1;i++)
	{
		j=0;
		while(vec[j].size()!=0)
		{
			if(dist[vec[j][0]]+vec[j][2]<dist[vec[j][1]] &&dist[vec[j][0]]!=INT_MAX);
			dist[vec[j][1]]=vec[j][2]+dist[vec[j][0]];
			j++;
		}
	}
	cout<<dist[n-1]<<endl;
}
