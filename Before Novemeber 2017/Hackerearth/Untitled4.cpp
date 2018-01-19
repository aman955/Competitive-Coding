#include <iostream>

using namespace std;

int main()
 {

int n,m;
cin>>n>>m;
int arr[n+1][m+1]={},brr[n+1][m+1]={},vis[n+1][m+1]={};
for(i=1;i<=n;i++)
{
	for(j=1;j<=m;j++)
	{
		cin>>arr[i];
		brr[i]=arr[i];
	}
}

for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
	if(!visited[i][j])
	{
		if(arr[i][j]==arr[i][j-1])
		{
			count++;
		}
		else
		{
			for(i=1;i<=n;i++)
			{
				
			}
		}
	}
     }
}

}
