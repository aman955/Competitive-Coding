#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int i,n,k;
	cin>>n>>k;
	long long int arr[n],brr[n];
	for(i=0;i<n;i++)cin>>arr[i];
    for(i=0;i<n;i++)cin>>brr[i];
    long long profit=-1;
    for(i=0;i<n;i++)
    {
    	profit = max (profit, (k/arr[i])*brr[i]);
	}
	cout<<profit<<endl;
	}
}
