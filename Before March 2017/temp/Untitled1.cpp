#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void DFS(int )

int main()
{
	int n,a,b,e;
	cin>>n>>e;
	vector< vector<int> > vec(n+1);
	bool vector<int> visited(n+1,false);
	for(int i=1;i<=e;i++)
	{
		cin>>a>>b;
		vec[a].push_back(b);
	}
	
	stack fin;

	
	for(i=1;i<=n;i++)
	{
		if(visited[i]==true)
		continue;
		stack s;
		s.push(i);
		visited[i]=true;
		
		while(!s.empty())
		{
			temp=s.top();
			for(i=1;i<=vec[temp].size();i++)
			{
				if(visited[vec[temp][i]]==true)
				continue;
				s.push(i);
			}
			
			
			
		}
		
		
	}
	
	
}
