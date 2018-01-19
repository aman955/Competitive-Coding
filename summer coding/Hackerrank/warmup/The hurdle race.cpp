#include<iostream>
using namespace std;

int main()
{
	int n,k,max=0;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>max)
		max=arr[i];
	}
	if(max-k<0)
	cout<<"0"<<endl;
	else
	cout<<max-k;
}
