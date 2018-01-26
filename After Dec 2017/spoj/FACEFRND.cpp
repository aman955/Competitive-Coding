#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,x,t,j;
	cin>>n;
	int arr[10000];
    memset(arr,1,sizeof(arr));
	for(i=0;i<n;i++)
	{
		cin>>x;
		arr[x]=-1;
		cin>>t;
		for(j=1;j<=t;j++)
		{
			cin>>x;
			if(arr[x]!=-1)
			{
				arr[x]=1;
			}
		}
	}
	int count=0;
	for(i=0;i<=9999;i++)
	{
		if(arr[i]==1)
		count++;
	}
	cout<<count<<endl;
}
