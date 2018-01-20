#include<bits/stdc++.h>
#include<queue>
using namespace std;

	vector<int> vec[101];

int level[103]={0};
bool visited[103]={false};

void bfs(int node)
{
	visited[1]=true;
	queue<int> q;
	q.push(1);
	level[1]=0;
	int i;
	while(!q.empty())
	{
		int v=q.front();
		visited[v]=true;
		q.pop();
		for(i=0;i<vec[v].size();i++)
		{
			if(!visited[vec[v][i]])
			{
				visited[vec[v][i]]=true;
				q.push(vec[v][i]);
				level[vec[v][i]]=level[v]+1;
			}
			if(vec[v][i]==100)
			cout<<level[100]<<endl;
		}
	}
}

int main()
{
int i,j,x,y,k;

for(i=1;i<=95;i++)
{
	vec[i].push_back(i+1);
	vec[i].push_back(i+2);
	vec[i].push_back(i+3);
	vec[i].push_back(i+4);
	vec[i].push_back(i+5);
}

    vec[96].push_back(97);
	vec[96].push_back(98);
	vec[96].push_back(99);
	vec[96].push_back(100);
	vec[97].push_back(98);
	vec[97].push_back(99);
	vec[97].push_back(100);
    vec[98].push_back(99);
	vec[98].push_back(100);
    vec[99].push_back(100);

int snakes,ladders;
cin>>ladders;
for(i=1;i<=ladders;i++)
{
	cin>>x>>y;
	vec[x-1].push_back(y);
	vec[x-2].push_back(y);
	vec[x-3].push_back(y);
	vec[x-4].push_back(y);
	vec[x-5].push_back(y);
}
cin>>snakes;
for(i=1;i<=snakes;i++)
{
	cin>>x>>y;
    vec[x-1].push_back(y);
	vec[x-2].push_back(y);
	vec[x-3].push_back(y);
	vec[x-4].push_back(y);
	vec[x-5].push_back(y);
	
}

bfs(1);
}
