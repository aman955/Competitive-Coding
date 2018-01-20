#include<bits/stdc++.h>
#include<vector>
#include<queue>
#include<set>
#include<list>

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,e,u,v;
	cin>>n>>e;
	vector< vector<int> > vec(n+1);
	vector<bool> visited(n+1,false);
	vector<int> distance(n+1,0);
	for(int i=0;i<e;i++)
	{
		cin>>u>>v;
	vec[u].push_back(v);
	vec[v].push_back(u);
    }
    int src;
    cin>>src;
    distance[src]=0;
    int count=0,i=src;
    while(count!=n+1)
    {
    	count++;
    	if(visited[i])
    	continue;
    queue<int> q;
    if(i==n+1)
    i=0;
    q.push(i);
    visited[i]=true;
    
    while(!q.empty())
    {
    	
    	int front=q.front();
    	q.pop();
    	
    	for(int j=0;j<vec[front].size();j++)
    	{
    		if(visited[vec[front][j]])
    		continue;
    		
    		q.push(vec[front][j]);
    		visited[vec[front][j]]=true;
			if(distance[front]!=0)
    		distance[vec[front][j]]=distance[front]+6;
    		
    		
		}
    	
	}
    i++;
    
    }
    for(i=1;i<=n;i++)
   {
   	if(i!=src)
   	{
   		if(distance[i]!=0)
   		cout<<distance[i]<<" ";
   		else
   		cout<<"-1 ";
	   }
   }
   cout<<endl;
   
}
}
