#include<bits/stdc++.h>
using namespace std;

vector<int> vec[100001];
bool vis[100001];
int col[100001]={};

int edg1[200002]={};
int edg2[200002]={};
bool colour[101];
int p=1;

void dfs(int s)
{
vis[s]=true;
colour[col[s]]=true;
for(int i=0;i<vec[s].size();i++)
{
	if(!vis[vec[s][i]])
	{
		
		dfs(vec[s][i]);
	}	
}	
}

int main()
{
	int n,m,q;
	int i,j,k,x,y;
	cin>>n>>m>>q;
	for(i=0;i<n;i++)
	cin>>col[i];
	
	for(i=0;i<m;i++)
	{
		cin>>edg1[i]>>edg2[i];
		x=edg1[i];y=edg2[i];
		vec[x-1].push_back(y-1);
		vec[y-1].push_back(x-1);
	}
	
	int a,b;
	for(k=0;k<q;k++)
	{
		cin>>a>>b;
		if(a==1)
		{
	
		vector<int>::iterator it = find(vec[edg1[b-1]-1].begin(), vec[edg1[b-1]-1].end(), edg2[b-1]-1);
		if(it!=vec[edg1[b-1]-1].end())
		vec[edg1[b-1]-1].erase(it);
		vector<int>::iterator it2 = find(vec[edg2[b-1]-1].begin(), vec[edg2[b-1]-1].end(), edg1[b-1]-1);
		if(it!=vec[edg2[b-1]-1].end())
		vec[edg2[b-1]-1].erase(it2);
		
		
		}
		else
		{
			dfs(b-1);
			int counti=0;
			for(i=0;i<=100;i++)
			{
				if(colour[i])
				counti++;
			}
			cout<<counti<<endl;
				memset(colour,false,sizeof(colour));
				memset(vis,false,sizeof(vis));
		}
	
	}
	
}
