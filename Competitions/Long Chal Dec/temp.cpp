#include <bits/stdc++.h>
using namespace std;
long int a,b,c;
long int space[100][100][100]={};
long int solve(long int x1,long int y,long int z)
{
	if(x1==0&&y==0&&z==0)
	{
		return 0;
	}
	else if(x1<0||y<0||z<0)
	{
               return INT_MAX;
	}
  
		space[x1][y][z]=min(solve(x1-1,y-1,z-1)+c,min(solve(x1-1,y,z)+a,min(solve(x1,y-1,z)+a,min(solve(x1,y,z-1)+a,min(solve(x1-1,y-1,z)+b,min(solve(x1,y-1,z-1)+b,solve(x1-1,y,z-1)+b))))));
		return space[x1][y][z];
}
 
int main(){
	long int t;
	cin>>t;
	long int x,y1,z1,i,j,k;

	while(t--)
	{
			for(i=0;i<=99;i++)
	{
		for(j=0;j<=99;j++)
		{
			for(k=0;k<=99;k++)
			space[i][j][k]=0;
		}
	}
		cin>>x>>y1>>z1>>a>>b>>c;
		cout<<solve(x,y1,z1)<<endl;
	}
 
	return 0;
}
