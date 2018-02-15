#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		queue<pair<int,int> > q;
		int n,i,x,y;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>x>>y;
			q.push(make_pair(x,y));
		}
		int time=1;
		while(!q.empty())
		{
			pair<int,int> c= q.front();
			if(c.second>=time)
			{
				if(c.first>time)
				{
					time=c.first;
				}
				cout<<time<<" ";
		    	time++;
		    	q.pop();
			}
			else
			{
				q.pop();
				cout<<"0 ";
				continue;
			}
		}
		cout<<endl;
	}
}
