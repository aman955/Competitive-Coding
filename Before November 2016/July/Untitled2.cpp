#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int R,C,r,c;
	cin>>R>>C;
	long long i,j,m=1,n=1,k,l,a,b;
	while(t--)
	{
		cin>>R>>C;
		m=1;
		n=1;
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
		m=i;
		n=1;
		for(j=1;j<=C-c+1;j++)
		{
	     a=m;
			for(k=1;k<=r;k++)
			{
				b=n;
				for(l=1;l<=c;l++)
				{
			
				if(GRID[a][b]!=grid[k][l])
				{
				goto aman;
			
				}
					b++;
			    }
			    a++;
			}
			if(k==r+1&&l==c+1)
			{
				cout<<"YES"<<endl;
				goto rathore;
			}
			aman:
		   
		    n=j+1;
			
		}
	}
	cout<<"NO"<<endl;
	rathore: ;
}
	return 0;
	
}

