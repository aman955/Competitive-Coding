#include<iostream>
using namespace std;

int arr[6][50001]={};

int main()
{
	int i,j,n,m;
	cin>>m>>n;
	for(j=1;j<=m;j++)
	{
		for(i=1;i<=n;i++)
		{
			cin>>arr[i][j];
		}
	}
	for(j=1;j<=m;j++)
	{
		for(i=1;i<=m;i++)
		{
			arr[i][j]=max(arr[i][j-1],arr[i-1][j])+arr[i][j];
		}
	}
	for(j=1;j<=m;j++)
	cout<<arr[n][j]<<" ";
}
