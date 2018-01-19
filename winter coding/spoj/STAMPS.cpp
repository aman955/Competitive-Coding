#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int j=1;j<=t;j++)
	{
		long long int mon,n,i;
		cin>>mon>>n;
		long long int arr[n];
		for(i=0;i<n;i++)cin>>arr[i];
		sort(arr,arr+n);
		long long sum=0,count=0;
		for(i=n-1;i>=0;i--)
		{
	        sum+=arr[i];
	        count++;
			if(sum>=mon)
			{
			
			break;	
			}
		}
		if(i==-1)
		{
			cout<<"Scenario #"<<j<<":"<<endl<<"impossible"<<endl<<endl;
		}
		else
		{
				cout<<"Scenario #"<<j<<":"<<endl<<count<<endl<<endl;
		}
	}
}

