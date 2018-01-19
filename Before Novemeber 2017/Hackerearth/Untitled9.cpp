#include<iostream>
#include<vector>
using namespace std;


int arr[22][22]={};
int visited[22][22]={};
int count=0;

void dfs(int k,int l,int arr[22][22],int n)
{

	visited[k][l]=1;
	if(k==n&&l==n)
	{
	count++;
	return;
}

			if(!visited[k+1][l]&&!arr[k+1][l])
			{
				dfs(k+1,l,arr,n);
				visited[k+1][l]=0;
			}
			if(!visited[k-1][l]&&!arr[k-1][l])
			{
				dfs(k-1,l,arr,n);
				visited[k-1][l]=0;
			}
			if(!visited[k][l+1]&&!arr[k][l+1])
			{
				dfs(k,l+1,arr,n);
				visited[k][l+1]=0;
			}
			if(!visited[k][l-1]&&!arr[k][l-1])
			{
				dfs(k,l-1,arr,n);
				visited[k][l-1]=0;
			}
			return ;
			
		
	
}

int main()
{
	int t;
	cin>>t;

	
	while(t--)
	{
		count=0;
		int n,j,i;
		cin>>n;
		for(i=0;i<=21;i++)
		{
			for(j=0;j<=21;j++)
			{
			 visited[i][j]=0;
			 arr[i][j]=1;
		    }
		}
		


		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			cin>>arr[i][j];
		}
		dfs(1,1,arr,n);
		cout<<count<<endl;
	}
}
