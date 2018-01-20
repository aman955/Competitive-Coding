#include<iostream>
using namespace std;

int main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
	cin>>n;
	long long arr[n];
	for(i=0;i<n;i++)cin>>arr[i];
	
	if((n&1))
	{
	for(i=0;i<n-2;i++)
	cout<<arr[i]<<" ";
	cout<<"1 "<<arr[n-2]-1<<" 1 "<<arr[n-1]-1<<endl;
}
	
}
}
