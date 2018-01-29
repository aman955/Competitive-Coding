#include<bits/stdc++.h>
using namespace std;
bool arr[1000001]={};

int main()
{
	
	int k,l,m,i,n;
	cin>>k>>l>>m;
	arr[1]=true;
	arr[k]=true;
	arr[l]=true;
	for(i=2;i<=k;i++)
	{
		if(i%2)arr[i]=true;	
	}
		for(i=k;i<=l;i++)
	{
		if(!arr[i-k]||!arr[i-1])
		arr[i]=true;
	}
	
	
	for(i=l;i<=1000000;i++)
	{
		if(!arr[i-k]||!arr[i-l]||!arr[i-1])
		arr[i]=true;
	}
	while(m--)
	{
		cin>>n;
		if(arr[n])cout<<"A";
		else cout<<"B";
	}
}
