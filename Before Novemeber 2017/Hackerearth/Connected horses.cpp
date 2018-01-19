#include<iostream>
#include<queue>
#define mod 1000000007
using namespace std;

long fact[100005];

void factorial()
{
	fact[0]=1;
	fact[1]=1;
	for(long i=2;i<=100003;i++)
fact[i]=(fact[i-1]%mod*i%mod)%mod;	
}

bool arr[1005][1005]={};
bool visited[1005][1005]={};

int main()
{
	int t;
	factorial();
	cin>>t;
	while(t--)
	{
		int n,m,i,p,j,x,y;
		long long ans=1,count=0;
		cin>>n>>m>>p;
		
		
			for(i=2;i<=n+1;i++)
		{
			for(j=2;j<=m+1;j++)
			{
				arr[i][j]=false;
				visited[i][j]=false;
			}
		}
			
		for(i=1;i<=p;i++)
		{
		cin>>x>>y;
		arr[x+1][y+1]=true;
		}
		
		
	
		
			for(i=2;i<=n+1;i++)
		{
			for(j=2;j<=m+1;j++)
			{
				
				if(!visited[i][j])
				{
				
					if(arr[i][j])
					{
						count=0;
						
						queue< pair<int,int> > q;
						q.push(make_pair(i,j));
						visited[i][j]=true;
						while(!q.empty())
						{
							pair<int,int> it=q.front();
							q.pop();
							int g=it.first;
							int h=it.second;
							count++;
							if(arr[g+1][h+2]&& (!visited[g+1][h+2]))
							q.push(make_pair(g+1,h+2));
						    if(arr[g-1][h+2] &&(!visited[g-1][h+2]))
							q.push(make_pair(g-1,h+2));
							if(arr[g+2][h-1]&&(!visited[g+2][h-1]))
							q.push(make_pair(g+2,h-1));
							if(arr[g+2][h+1]&&(!visited[g+2][h+1]))
							q.push(make_pair(g+2,h+1));
							if(arr[g+1][h-2]&&(!visited[g+1][h-2]))
							q.push(make_pair(g+1,h-2));
							if(arr[g-1][h-2]&&(!visited[g-1][h-2]))
							q.push(make_pair(g-1,h-2));
							if(arr[g-2][h-1]&&(!visited[g-2][h-1]))
							q.push(make_pair(g-2,h-1));
							if(arr[g-2][h+1]&&(!visited[g-2][h+1]))
							q.push(make_pair(g-2,h+1));
							visited[g+1][h+2]=true;
							visited[g-1][h+2]=true;
							visited[g+2][h-1]=true;
							visited[g+2][h+1]=true;
							visited[g+1][h-2]=true;
							visited[g-1][h-2]=true;
							visited[g-2][h-1]=true;
							visited[g-2][h+1]=true;
						}
						if(count>0)
						ans=(ans%mod*fact[count]%mod)%mod;
					}
				}
			}
		}
		cout<<ans<<endl;
		
	}
}
