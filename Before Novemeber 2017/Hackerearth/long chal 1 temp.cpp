#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cout<<"aman";
		int n;
		cin>>n;
		long long int arr[n];
		long long index=0;
		for(long long i=0;i<n;i++)
		{
			cin>>arr[i];
		if(arr[i]<arr[index])
		{
			index=i;
		}
		}
		cout<<index+1<<endl;

	}
}
