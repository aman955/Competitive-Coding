#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int arr[n+1],start=1;
	int crr[n+1]={0};
	for(i=1;i<=n;i++)
	cin>>arr[i];
	int temp;
	
	int count=0;
	
	
		while(start!=n+1)
	{
		if(!crr[start])
		{
			crr[start]=1;
		temp=arr[start];

		while(temp!=start)
		{
			crr[temp]=1;
			
			temp = arr[temp];
		}
		
		count++;
	    }
	    start++;
	}
	
	cout<<count<<endl;
	
	
	start=1;
	int brr[n+1]={0};
	
	
	
	
	while(start!=n+1)
	{
		if(!brr[start])
		{
			brr[start]=1;
		temp=arr[start];
		cout<<start<<" ";
		while(temp!=start)
		{
			brr[temp]=1;
			cout<<temp<<" ";
			temp = arr[temp];
		}
		cout<<start<<endl;
	    }
	    start++;
	}
}
