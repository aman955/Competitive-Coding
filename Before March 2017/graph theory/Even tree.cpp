#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


vector<int> vec[105];
int answer=0;
bool visited[105];

int dfs(int node)
{
	int i,numnodes;
	visited[node]=true;
	int temp=0;
	for(i=0;i<vec[node].size();i++)
	{
		if(!visited[vec[node][i]])
		{
			numnodes=dfs(vec[node][i]);
			if(numnodes%2==0)
			answer++;
			else
			temp+=numnodes;
		}
	}
	return temp+1;
	
}



int main()
{
	int n,m,x,y,i;
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>x>>y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	
	dfs(5);
	cout<<answer;
}
