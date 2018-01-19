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
		int i,arr[n];
		for(i=0;i<n;i++)
		cin>>arr[i];
		
		if(n==2)
		{
			if(arr[0]!=arr[1])
			{
				cout<<"2"<<endl;
			}
			else
			cout<<"0"<<endl;
		    continue;
		}
		
		int count=0;
		for(i=1;i<n-1;i++)
		{
			if(arr[i]!=arr[i-1]||arr[i]!=arr[i+1])
			{
				count++;
			}
		}
		if(arr[0]!=arr[1])count++;
		if(arr[n-1]!=arr[n-2])count++;
	
		cout<<count<<endl;
	}
}

