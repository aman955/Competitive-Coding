#include<iostream>
using namespace std;



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,i,j,max=-1;
		cin>>n>>m;
		int arr[n+2][m+2],brr[n+2][m+2];
		for(i=0;i<=n+1;i++)
		{
		    brr[i][0]=0;
			brr[i][m+1]=0;
			arr[i][0]=0;
			arr[i][m+1]=0;
		}
		
		for(i=0;i<=m+1;i++)
		{
			brr[n+1][i]=0;
			brr[0][i]=0;
			arr[n+1][i]=0;
			arr[0][i]=0;
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				cin>>arr[i][j];
				brr[i][j]=arr[i][j];
				if(arr[i][j]>max)
				max=arr[i][j];
			}
		}
		int count=0;
		bool equi=false;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				if(arr[i][j]!=max)
				{
					equi=true;
					break;
				}
			}
		}

		while(equi)
		{
			count++;
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=m;j++)
				{
					if(arr[i][j]==max)
					{
						brr[i+1][j]=max;
						brr[i-1][j]=max;
						brr[i][j+1]=max;
						brr[i][j-1]=max;
						brr[i-1][j-1]=max;
						brr[i+1][j+1]=max;
						brr[i+1][j-1]=max;
						brr[i-1][j+1]=max;
					}
				}
			}
			equi=false;
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=m;j++)
				{
				if(brr[i][j]!=max)
				{
					equi=true;
				}
				arr[i][j]=brr[i][j];
			     }
			}
		}
		cout<<count<<endl;
	}
}
