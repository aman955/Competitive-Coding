#include<bits/stdc++.h>
using namespace std;



int main()
{
	int bud=1,n=1,i,j;
	while(1)
	{
	cin>>bud>>n;
	if(bud==0&&n==0)
	{
		break;
	}
	
	int dpmax[101][501]={};
bool check[501];
int arr[100]={};
int fun[100]={};


	for(i=0;i<n;i++)
	{
		cin>>arr[i]>>fun[i];
	}

	for(i=0;i<n;i++)
	{
		for(j=1;j<=bud;j++)
		{
			if(j<arr[i])
			dpmax[i+1][j]=dpmax[i][j];
			else
			dpmax[i+1][j]=max(dpmax[i][j-arr[i]]+fun[i],dpmax[i][j]);
		}
	}
	for(i=0;i<=bud;i++)
	{
		if(dpmax[n][i]==dpmax[n][bud])
		{
			cout<<i<<" ";
			break;
		}
	}
	cout<<dpmax[n][bud]<<endl;
    
}

}
