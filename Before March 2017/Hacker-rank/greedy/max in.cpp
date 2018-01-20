#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	long n,i,k;
	cin>>n>>k;
	vector<long> arr(n+1);
	for(i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	long long dif=100000000000;
	for(i=1;i<=n-k+1;i++)
	{
		if(arr[i+k-1]-arr[i]<dif)
		dif=arr[i+k-1]-arr[i];
	}
	cout<<dif;
}
