#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int sum=0,sum1=0,sum2=0,n,k;
		cin>>n>>k;
		int i,arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			sum+=arr[i];
		}
		int kid1=0,chef1=0;
		sort(arr,arr+n);
		for(i=0;i<k;i++)
		{
			sum1+=arr[i];
		}
		for(i=n-1;i>0,k>0;i--)
		{
			sum2+=arr[i];
			k--;
		}
		
		cout<<max(abs(sum1-(sum-sum1)),abs(sum2-(sum-sum2)))<<endl;
	}
	}

