#include<iostream>
using namespace std;

int main()
{
	int n,i,length;
	cin>>n;
	int arr[n+1];
	for(i=1;i<=n;i++)
	cin>>arr[i];
	int l=1,r=1;
	long maxlength=0;
	for(i=1;i<=n;i++)
	{
		length=1;
		while(arr[i+1]>arr[i]&&i!=n)
		{
			i++;
			length++;
		}
		if(length>maxlength)maxlength=length;
		
	}
	cout<<maxlength;
		
	}
	
	
	

