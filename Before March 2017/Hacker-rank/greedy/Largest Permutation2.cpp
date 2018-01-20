#include<iostream>
using namespace std;

int main()
{
	long n,i,x,j,l,atstart;
	long long k;
	cin>>n>>k;
	long arr[n+1],index[n+1],max=n;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		arr[x]=i;
		index[i]=x;
	}
	
	if(k>=n)
	{
		for(i=n;i>0;i++)
		cout<<i<<" ";
	}
	else
	{
		for(i=1;i<=k;i++)
		{
			l=index[i];
			index[i]=max;
			j=arr[max];
			index[j]=l;
			arr[max]=i;
			arr[l]=j;
			max--;
		}
		for(i=1;i<=n;i++)cout<<index[i]<<" ";
	}
	
}
