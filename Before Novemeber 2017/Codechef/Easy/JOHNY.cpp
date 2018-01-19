#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int t,i;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int k;
		cin>>k;
		k=arr[k-1];
		sort(arr,arr+n);
		for(i=0;i<n;i++)
	{
			if(k==arr[i])
		{
		cout<<i+1<<endl;
		break;	
		}
	}
			}
}
