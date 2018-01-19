#include<iostream>
#include<vector>
#include<set>
using namespace std;
set< pair<int,int> > st;

void dfs(vector<int> vec[],int s,int visited[],int height)
{
	visited[s]=1;
	st.insert(make_pair(height,s));
	for(int i=0;i<vec[s].size();i++)
	{
		if(!visited[vec[s][i]])
		dfs(vec,vec[s][i],visited,height+1);
	}
}


int main()
{
	int n,i,e,a,b;
	cin>>n;
	vector<int> vec[n+1];
	int visited[n+1]={},gf[n+1]={};
	for(i=0;i<n-1;i++)
	{
		cin>>a>>b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	int q,x;
	cin>>q;
	while(q--)
	{
		cin>>x;
		gf[x]=1;
	}
	

dfs(vec,1,visited,0);
set< pair< int,int> >::iterator it;

for(it=st.begin();it!=st.end();it++)
{
	if(gf[(*it).second])
	{
		cout<<(*it).second<<endl;
		break;
	}
}


}
