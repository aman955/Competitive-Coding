#include<iostream>
using namespace std;

int main()
{
	int n,m,i,j;
	long long x,y;
	cin>>n>>m;
	long long int table[n+1][m];
	int coin[m];
	for(i=0;i<m;i++)cin>>coin[i];
	
	for(i=0;i<m;i++)
	table[0][i]=1;
	
	for(i=1;i<n+1;i++)
	{
		for(j=0;j<m;j++)
		{
			if((i-coin[j])>=0)
			{
				x=table[(i-coin[j])][j];
			}
			else
			x=0;
			
			if(j>=1)
			{
				y=table[i][j-1];
			}
			else y=0;
			table[i][j]=x+y;
		}
	}
	cout<<table[n][m-1];
	
}
