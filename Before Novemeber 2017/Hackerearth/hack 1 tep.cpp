#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		long int arr[n+1];
		int flag=1;
		bool brr[n+1]={};
		for(i=1;i<=n;i++)
		{
		cin>>arr[i];
		if(arr[i]>n)
		{
			flag=0;
		}
		else
		brr[arr[i]]=true;
	}
	
	for(i=1;i<=n;i++)
	{
		if(brr[i]==false)
		{
			flag=0;
			break;
		}
	}
		int count=0;
		for(i=2;i<=n;i++)
		{
			if(arr[i]>arr[i-1])
			count++;
		}
		cout<<"aman"<<endl;
		if(count==n-1)
		flag=0;
		
		if(flag==1)
		cout<<"Beautiful"<<endl;
		else 
		cout<<"Ugly"<<endl;
	}
}
