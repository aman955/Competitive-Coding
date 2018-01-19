#include<iostream>
using namespace std;


int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n+1],i,count=0;
	for(i=0;i<n;i++)cin>>arr[i];
	arr[n]=0;
	for(i=0;i<n;i++)
	{
		if(k<=0)
		{
			break;
		}
		else
		{
			if(arr[i]<=8)
			{
				k=k-arr[i];
				count++;
			}
			else
			{
				k=k-8;
				arr[i+1]+=arr[i]-8;
				count++;
			}
		}
	}
	if(k>0)
	cout<<"-1"<<endl;
	else
	cout<<count<<endl;
}
