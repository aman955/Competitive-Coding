#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n],j,i;
	for(i=0;i<n;i++)cin>>arr[i];
	
	for(i=0;i<n;i++)
	{
		j=i;
		while(j>0 && arr[j]<arr[j-1])
		{
			int temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			j--;
		}
		
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
