#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,e,a,b,i;
		cin>>n>>e;
		vector<int> vec[n+1];
		int level[n+1],visited[n+1]={};
		for(i=1;i<=e;i++)
		{
			cin>>a>>b;
			vec[a].push_back(b);
			vec[b].push_back(a);
		}
		queue<int> q;
		q.push(1);
		level[1]=0;
		visited[1]=1;
		while(!q.empty())
		{
		int c=q.front();
		q.pop();
		for(i=0;i<vec[c].size();i++)
		{
			if(!visited[vec[c][i]])
			{
				visited[vec[c][i]]=1;
				level[vec[c][i]]=level[c]+1;
				q.push(vec[c][i]);
			}
		}	
		}
		cout<<level[n]<<endl;
		
		
		
		
		
	}
}
