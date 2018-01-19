#include<iostream>
using namespace std;



int main()
{
	int i,j,n,m;
	cin>>m>>n;
	int arr[n+1]={},prev[n+1]={},ans[m+1]={ };
	for(j=1;j<=m;j++)
	{
		for(i=1;i<=n;i++)
		{
			cin>>arr[i];
			arr[i]=max(prev[i],arr[i-1])+arr[i];
		}
	  ans[j]=arr[n];
	  for(i=1;i<=n;i++)
	  prev[i]=arr[i];
	  	
		
	}
	
	for(j=1;j<=m;j++)
	cout<<ans[j]<<" ";
}
