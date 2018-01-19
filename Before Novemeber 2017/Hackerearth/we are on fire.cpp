#include<iostream>
#include<queue>
using namespace std;

int arr[1001][1001]={};
int visited[1001][1001]={};

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,i,p,j,x,y,count=0;
		cin>>n>>m>>p;
		
		
			for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				arr[i][j]=0;
				visited[i][j]=0;
			}
		}
			
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				cin>>arr[i][j];
				if(arr[i][j])
				count++;
			}
		}
		
		while(p--)
		{
			cin>>x>>y;
			if(arr[x][y])
			{
						queue< pair<int,int> > q;
						q.push(make_pair(x,y));
						visited[x][y]=1;
						while(!q.empty())
						{
							pair<int,int> it=q.front();
							q.pop();
							int g=it.first;
							int h=it.second;
							arr[g][h]=0;
							count--;
						
					
						
							if(arr[g+1][h]&&(!visited[g+1][h]))
							q.push(make_pair(g+1,h));
							if(arr[g][h+1]&&(!visited[g][h+1]))
							q.push(make_pair(g,h+1));
							if(arr[g][h-1]&&(!visited[g][h-1]))
							q.push(make_pair(g,h-1));
							if(arr[g-1][h]&&(!visited[g-1][h]))
							q.push(make_pair(g-1,h));
						
							visited[g][h+1]=1;
							visited[g+1][h]=1;
							visited[g-1][h]=1;
							visited[g][h-1]=1;
						}
					}
					cout<<count<<endl;
			}
			
	}
}
	
