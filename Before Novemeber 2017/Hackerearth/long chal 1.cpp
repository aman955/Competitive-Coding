#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n+1]={},i;
		long long sum=0,presum[n+1]={},suffsum[n+1]={};
		for(i=0;i<n;i++)
		{
		cin>>arr[i];
sum+=arr[i];
	    }
	    suffsum[0]=sum;
	    long long max=INT_MAX,index=0;
	    	for(i=1;i<=n;i++)
		{
		suffsum[i]=suffsum[i-1]-arr[i-1];
		presum[i]=presum[i-1]+arr[i];
		if(presum[i]+suffsum[i]<max)
		{
			max=presum[i]+suffsum[i];
			index=i;
		}
	    }
		cout<<index<<endl;
	}
}
