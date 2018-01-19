#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i;
	cin>>n>>m;
	string arr;
	cin>>arr;
	
	while(m--)
	{
		int b1=0,b2=0,x;
		cin>>x;
		for(i=0;i<x-1;i++)
		{
			if(arr[x-1]-arr[i]>0)
			b1+=(arr[x-1]-arr[i]);
			else
			b2+=(arr[x-1]-arr[i]);
		}
		cout<<b1-b2<<endl;
	}
}
