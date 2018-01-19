#include<iostream>
using namespace std;

int brr[100005]={0};
int main()
{
	int n,m,i;
	cin>>n>>m;
	int arr[n];
	for(i=0;i<n;i++)
	{
	cin>>arr[i];
	brr[arr[i]]++;
    }
    int sum=0;
    for(i=0;i<100005;i++)
    {
    	if(brr[i])
    	sum++;
	}
	int dp[n+1];
	dp[0]=sum;
	for(i=0;i<n;i++)
	{
		if(brr[arr[i]]>1)
		{
		brr[arr[i]]--;
		dp[i+1]=dp[i];
	    }
		else
		dp[i+1]=dp[i]-1;
	}
	int l;
	for(i=0;i<m;i++)
	{
		cin>>l;
		cout<<dp[l-1]<<endl;
	}
}
