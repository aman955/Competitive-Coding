#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,j,i;
		cin>>n>>m;
		vector<int> vec[m+1];
		long dist[n+1];
		int to,from,weight;
		for(i=0;i<m;i++)
		{
			cin>>from>>to>>weight;
			vec[i].push_back(from);
			vec[i].push_back(to);
			vec[i].push_back(weight);
		}
		for(i=0;i<=n;i++)
		{
			dist[i]=INT_MAX;
		}
		dist[1]=0;
		for(i=0;i<m;i++)
		{
			j=0;
			while(vec[j].size()!=0)
			{
				if(dist[vec[j][0]]+vec[j][2]<dist[vec[j][1]])
				dist[vec[j][1]]=vec[j][2]+dist[vec[j][0]];
				j++;
			}
		}
		int q;
		cin>>q;
		long long ver,time;
		while(q--)
		{
		cin>>ver>>time;
		time=time-dist[ver]*2;
		if(time>=0)
		cout<<time<<endl;
		else
		cout<<0<<endl;
	   }
	}
}
