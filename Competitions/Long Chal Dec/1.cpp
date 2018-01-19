	#include<iostream>
	using namespace std;
	
	int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			int n,m;
			int points1=0,points2=0;
			cin>>n>>m;
			char arr[n+2][m+2];
			int i,j;
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=m;j++)
				{
					cin>>arr[i][j];
				}
			}
			char start='G',con='R';
			for(i=1;i<=n;i++)
			{
				if(start=='G')
			{
				start='R';
				con='G';
			}
			else if(start=='R')
			{
				start='G';
				con='R';
			}
				for(j=1;j<=m;j=j+2)
				{
					
				if(arr[i][j]==start)
				{
					if(start=='R')
					points1=points1+5;
					else
					points1=points1+3;
				}
				if(arr[i][j+1]==con)
				{
					if(con=='G')
					points1=points1+3;
					else
						points1=points1+5;
				}
				}
			}
			start='R';
			con='G';
				for(i=1;i<=n;i++)
			{
				if(start=='R')
			{
				start='G';
				con='R';
			}
			else
			if( start=='G')
			{
				start='R';
				con='G';
			}
				for(j=1;j<=m;j=j+2)
				{
					
				if(arr[i][j]==start)
				{
					if(start=='R')
					points2=points2+5;
					else
					points2=points2+3;
				}
				if(arr[i][j+1]==con)
				{
					if(con=='G')
					points2=points2+3;
					else
					points2=points2+5;
				}
				}
			}
			int ans=min(points1,points2);
			cout<<ans<<endl;
			points1=0;
			points2=0;
		}
	}
