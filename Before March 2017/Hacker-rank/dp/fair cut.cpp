#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n,k,i,j;
	cin>>n>>k;
	vector<long long> vec(n+1);
	for(i=1;i<=n;i++)
	cin>>vec[i];
	sort(vec.begin(),vec.end());
	long long min1=0;
	
	
	for(i=1;i<=k;i++)
	{
		for(j=k+1;j<=n;j++)
		{
			min1=min1+abs(vec[j]-vec[i]);
		}
	}
	long long mini=min1;
	
	for(i=2;i<=n-k;i++)
	{
		long cons1=0,cons2=0,cons3=0,cons4=0;
		for(j=i+k;j<=n;j++)
		{
			cons1=cons1+abs(vec[j]-vec[i+k-1]);
		}
		for(j=i;j<=i+k-2;j++)
		{
			cons2=cons2+abs(vec[j]-vec[i-1]);
		}
		for(j=i+k;j<=n;j++)
		{
			cons3=cons3+abs(vec[j]-vec[i-1]);
		}
		for(j=i;j<=i+k-2;j++)
		{
			cons4=cons4+abs(vec[i+k-1]-vec[j]);
		}
		min1=min1+cons1+cons2-cons3-cons4;
		mini=min(min1,mini);
		
	}
	cout<<mini;
	
	
	
}
