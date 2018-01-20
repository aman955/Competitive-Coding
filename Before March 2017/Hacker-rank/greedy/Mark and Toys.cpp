#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	long long sum=0;
	int count=0;
	while(sum<=k&&count<=n-1)
	{
		sum=sum+arr[count];
		count++;
	}
	if(count==n)
	cout<<n;
	else cout<<count-1;
	
}
