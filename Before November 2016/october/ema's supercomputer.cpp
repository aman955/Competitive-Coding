#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	char grid[16][16];
	int n,m,i,j;
	cin>>n>>m;
	
		for(i=0;i<=15;i++)
	{
		for(j=0;j<=15;j++)
		{
			grid[i][j]='B';
		}
	}
	
	
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cin>>grid[i][j];
		}
	}
	int t=8;
	r=0,s=0;
	while(t--)
	{
		for(i=t-s;i<=t+s;i++)
		{
			for(j=t-s;j<=t+s;j++)
			{
				
			}
		}
		
	}
	
	
}
