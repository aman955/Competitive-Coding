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
		long int arr[n+1]={};
	int flag=1;
	bool brr[n+1]={};
		for(i=1;i<=n;i++)
		{
			cin>>arr[i];
			if(arr[i]>n)
			flag=0;
			else 
			brr[arr[i]]=true;
		}
		for(i=1;i<=n;i++)cout<<arr[i]<<endl;
		for(i=1;i<=n;i++)
		{
			if(!brr[i])
			flag=0;
		}
		for(i=1;i<=n-1;i++)
		{
			if(arr[i+1]<arr[i])
			flag=0;
		}
		if(flag==0)
		cout<<"Ugly"<<endl;
		else 
		cout<<"Beautiful"<<endl;
	}
}
