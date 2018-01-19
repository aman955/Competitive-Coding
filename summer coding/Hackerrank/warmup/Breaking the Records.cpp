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
	int best=arr[0],worst=arr[0],ans1=0,ans2=0;
	
	for(i=1;i<n;i++)
	{
		if(arr[i]>best)
		{
			best=arr[i];
			ans1++;
		}
		if(arr[i]<worst)
		{
			worst = arr[i];
			ans2++;
		}
	}
	cout<<ans1<<" "<<ans2;
}
