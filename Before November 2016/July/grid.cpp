#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int R,C,r,c;
	cin>>R>>C;
	long long i,j,m,n,k,l;
	char GRID[R+1][C+1];
	for(i=1;i<=R;i++)
	{
		for(j=1;j<=C;j++)
		cin>>GRID[i][j];
	}
	cin>>r>>c;
	char grid[r+1][c+1];
		for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		cin>>grid[i][j];
	}
	for(i=1;i<=R-r+1;i++)
	{
		for(j=1;j<=C-c+1;j++)
		{
			aman:
			for(k=1;k<=r;k++)
			{
			m=i;
				for(l=1;l<=c;l++)
				{
				n=j;
				if(GRID[m][n]!=grid[k][l])
				{
				goto aman;
				j++;
				}
					n++;
			    }
			    m++;
			}
			if(k==r+1&&l==c+1)
			{
				cout<<"YES"<<endl;
				return 0;
			}
			
		}
	}
	cout<<"NO"<<endl;
}

