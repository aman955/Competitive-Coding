#include<iostream>
#include<vector>
using namespace std;

vector<int> vec[100005];
bool visited[100005]={};
int order[1000005]={};
int n,e,a,j,b;

void dfs(int s)
{
	j++;

int flag=0;
	for(int i=0;i<vec[s].size();i++)
	{
		if(vec[s][i]==order[j])
		{
			flag=1;
			dfs(vec[s][i]);
			
		}
	}
	if(flag==0)
	{
		cout<<0<<endl;
		exit(0);
	}
	
	
}

int main()
{
	int i;
	cin>>n>>e;
	for(i=1;i<=n;i++)
	{
		cin>>order[i];
	}
	for(i=0;i<e;i++)
	{
		cin>>a>>b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	j=1;

	for(;j<=n;j++)
	{
	
			dfs(order[j]);
	
	}
	cout<<1<<endl;


}
