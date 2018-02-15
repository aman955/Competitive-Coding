#include<bits/stdc++.h>
using namespace std;

vector<int> vec[2001];
bool vis[2001]={};
bool val[2001]={};
void dfs(int s)
{
vis[s]=true;

for(int i=0;i<vec[s].size();i++)
{
	if(!vis[vec[s][i]])
	{
		val[vec[s][i]]=1-val[s];
		dfs(vec[s][i]);
	}	
}	
}

int main()
{
	int t;
	scanf("%d",&t);
	int n,e,p,i,j,x,y;
	for(p=1;p<=t;p++)
	{
		scanf("%d%d",&n,&e);
		for(j=0;j<e;j++)
		{
		scanf("%d%d",&x,&y);
		vec[x-1].push_back(y-1);
		vec[y-1].push_back(x-1);		
		}
		val[0]=0;
		for(i=0;i<n;i++)
		{
			if(!vis[i])
			dfs(i);
		}
	
		printf("Scenario #%d:\n",p);
		for(i=0;i<n;i++)
		{
			for(j=0;j<vec[i].size();j++)
			{
				if(val[i]==val[vec[i][j]])
				{
					printf("Suspicious bugs found!\n");
					goto aman;
				}
			}
			
		}
	
		printf("No suspicious bugs found!\n");
		aman: ;
			for(i=0;i<n;i++)
		{
			val[i]=0;
			vec[i].erase(vec[i].begin(),vec[i].end());
			vis[i]=false;
		}
		
	}
}
