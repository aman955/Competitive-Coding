#include<iostream>
using namespace std;

int main()
{
	int n,m,i,a,b,j;
	cin>>n>>m;
	bool arr[n+1]={false};
	for(i=1;i<=m;i++)
	{
		cin>>a>>b;
		arr[a]=true;
		arr[b]=true;
	}
	for(i=1;i<=n;i++)
	{
		if(arr[i]==false)
		{
			break;
		}
	}
	cout<<n-1<<endl;
	for(j=1;j<=n;j++)
	{
		if(i!=j)
		{
			cout<<i<<" "<<j<<endl;
		}
	}
	
}
