#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,r,c,j;
		cin>>r>>c;
		char mat[r][c];
		char p;
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cin>>mat[i][j];
				if(mat[i][j]>='A')
				{
					mat[i][j]=tolower(mat[i][j]);
				}
			}
		}
	
		for(i=0;i<r;i++)
		{
			for(j=0;j<c-4;j++)
			{
				if(mat[i][j]=='s'&&mat[i][j+1]=='p'&&mat[i][j+2]=='o'&&mat[i][j+3]=='o'&&mat[i][j+4]=='n')
				{
					cout<<"There is a spoon!"<<endl;
					goto aman;
				}
			}
		}
		
		for(j=0;j<c;j++)
		{
			for(i=0;i<r-4;i++)
			{
				if(mat[i][j]=='s'&&mat[i+1][j]=='p'&&mat[i+2][j]=='o'&&mat[i+3][j]=='o'&&mat[i+4][j]=='n')
				{
					cout<<"There is a spoon!"<<endl;
					goto aman;
				}
			}
		}
		cout<<"There is indeed no spoon!"<<endl;
		aman: ;
	}
}
