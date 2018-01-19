#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i,arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	sort(arr,arr+n);
	long long int ans=0;
	for(i=n-1;i>=0;i--)
	{
		ans=ans+arr[i]*pow(2,n-1-i);
	}
	cout<<ans;
	
}
