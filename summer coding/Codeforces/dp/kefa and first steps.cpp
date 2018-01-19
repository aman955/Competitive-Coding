#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int temp=1,max=1;
	for(i=0;i<n-1;i++)
	{
		if(arr[i+1]>=arr[i])
		temp++;
		else
		temp=1;
		if(temp>max)
		max=temp;
		
	}
	cout<<max;
	
}
