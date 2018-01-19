#include<iostream>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n],i,j,count=0;
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<=n-k;i++)
	{
		for(j=i+k-1;j>=i;j--)
		{
		if(arr[j]==1)
		{
		i=j+k-1;
		count++;
		goto aman;	
		}	
		}
		if(j==i-1)
		{
			cout<<"-1"<<endl;
			return 0;
		}
	    aman:   ;
	}
	cout<<count;
}
