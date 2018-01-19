#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,j,n,m;
		int points1=0,points2=0;
		cin>>n>>m;
		char arr[n+1][m+1];
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				cin>>arr[i][j];
			}
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				if((i+j)&1)
				{
					if(arr[i][j]!='R')
					{
						points1=points1+3;
					}
					else
					{
						points2+=5;
					}
				}
				else
				{
					if(arr[i][j]!='G')
					{
						points1=points1+5;
					}
					else
					{
						points2+=3;
					}
				}
			}
		}
		cout<<min(points1,points2)<<endl;
	}
}
