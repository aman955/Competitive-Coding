#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n;
		cin>>n;
		int arr[n];
		long long sum=0;
		for(i=0;i<n;i++)
		cin>>arr[i],sum+=arr[i];
		long long lsum=arr[0],rsum=sum-arr[0];
		for(i=1;i<=n-2;i++)
		{
		if(lsum/2>=rsum)
		{
			cout<<i<<" "<<n-i<<endl;
			break;
		}
		lsum=lsum+arr[i];
		rsum=rsum-arr[i];
		}
	}
}
