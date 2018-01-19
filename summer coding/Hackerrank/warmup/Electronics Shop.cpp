#include<iostream>
using namespace std;

int main()
{
	int s,n,m;
	cin>>s>>n>>m;
	int arr[n],j,brr[m],i;
	for(i=0;i<n;i++)
	cin>>arr[i];
	
	for(i=0;i<m;i++)
	cin>>brr[i];
	
	int max=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr[i]+brr[j]>max&& arr[i]+brr[j]<=s)
			max=arr[i]+brr[j];
		}
	}
	if(max==0)
	cout<<"-1"<<endl;
	else
	cout<<max<<endl;
}
