#include<iostream>
#include<vector>
using namespace std;
int k=1;
	bool rec[100005]={};
void dfs(vector<int> vec[],bool visited[],int s)
{
	visited[s]=true;
	rec[s]=true;
	for(int i=0;i<vec[s].size();i++)
	{
	
		if(!visited[vec[s][i]])
		{
		
			dfs(vec,visited,vec[s][i]);
		}
	}

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,f,s,x,y,i;
		k=1;
		cin>>n>>f>>s;
		vector<int> vec[n+1];
		bool visited[n+1]={};
		for(i=1;i<=n;i++)
		rec[i]=false;
		for(i=1;i<=f;i++)
		{
			cin>>x>>y;
			vec[x].push_back(y);
		}
		for(i=1;i<=s;i++)
		{
			cin>>k;
				dfs(vec,visited,k);
			
		}
		int count=0;
	for(i=1;i<=n;i++)
	{
		if(rec[i])
		count++;
	}
	cout<<count<<endl;
		
	}
}
