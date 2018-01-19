#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n+1];
		for(i=1;i<=n;i++)
		{
			cin>>arr[i];
		}
		for(i=1;i<=n-1;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(arr[i]==0)
				{
					temp=arr[i];
					arr[i]=arr[i+1];
					arr[i+1]=temp;
				}
			}
		}
		
	}
}
