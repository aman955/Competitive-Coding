#include<iostream>
using namespace std;

int main()
{
	int n,l,i,j,k,temp;
	cin>>n>>l;
	int arr[n+1],brr[n+1],diff1[n],diff2[n];
	for(i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	for(i=1;i<=n;i++)
	{
		cin>>brr[i];
	}
	
	for(i=1;i<n;i++)
	{
		diff1[i]=arr[i+1]-arr[i];
	}
	diff1[n]=(l-arr[n])+(arr[1]);
		for(i=1;i<n;i++)
	{
		diff2[i]=brr[i+1]-brr[i];
	}
	diff2[n]=(l-brr[n])+(brr[1]);
	
	
	
	for(i=1;i<=n;i++)
	{
		int count=0;
		for(j=1;j<=n;j++)
		{
			if(diff1[j]==diff2[j])
			{
				count++;
			}
		}
		if(count==n)
	{
		cout<<"YES";
		return 0;
	}
	else
	{
		temp=diff1[1];
		for(k=1;k<n;k++)
		{
			diff1[k]=diff1[k+1];
		}
		diff1[n]=temp;
	}
	
	
	}
	
	cout<<"NO";
}
