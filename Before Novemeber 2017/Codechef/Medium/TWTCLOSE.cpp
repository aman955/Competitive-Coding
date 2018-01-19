#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n+1]={};
	while(k--)
	{
		string str;
		int i,count=0,x;
		cin>>str;
		if(str=="CLICK")
		{
			cin>>x;
			if(arr[x]==0)arr[x]=1;
			else
			arr[x]=0;
		}
		else
		{
			for(i=1;i<=n;i++)arr[i]=0;
		}
		for(i=0;i<=n;i++)if(arr[i]==1)count++;
		cout<<count<<endl;
	}
	
}
