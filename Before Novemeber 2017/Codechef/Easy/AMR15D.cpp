#include<iostream>
#include<algorithm>
using namespace std;
long long brr[100005]={};

int main()
{
	int n;
	cin>>n;
	int arr[n];
	long long total=0;
	int i;
	for(i=0;i<n;i++)
	{
	cin>>arr[i];
	total+=arr[i];
    } 
	int k;
	cin>>k;
	sort(arr,arr+n);
	brr[0]=total;
	for(i=1;i<n;i++)
	{
		brr[i]=brr[i-1]-arr[n-i];
	}
	int x;
	while(k--)
	{
		cin>>x;
		cout<<brr[x]<<endl;
	}
}
