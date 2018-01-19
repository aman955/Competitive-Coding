#include<iostream>
#include<set>
#include<vector>
#define INF 2000000000
using namespace std;

int main()
{
	int n,m,k,j,u,v,i,x;
	cin>>n>>m>>k;
	long long l;
	vector< vector< pair<int,long long> > > vec(n+1);
	for(i=1;i<=m;i++)
	{
		cin>>u>>v>>l;
		vec[u].push_back(make_pair(v,l));
		vec[v].push_back(make_pair(u,l));
	
	}
	int flour[n+1]={0};
	long long min=INF;
	for(i=1;i<=k;i++)
	{
	cin>>x;
	flour[x]=1;
    }
    for(i=1;i<=n;i++)
    {
    if(flour[i])
    {
	for(j=0;j<vec[i].size();j++)
	{
     if(!flour[vec[i][j].first])
	{
			if(vec[i][j].second<min)
		{
			min=vec[i][j].second;
		}
	}
	}
}
   }
    if(min==INF)
    cout<<"-1";
    else
    cout<<min;
}
