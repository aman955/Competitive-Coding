#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	long i,j,n,k;
	cin>>n>>k;
	vector<long> vec(n+1);
	for(i=1;i<=n;i++)
	{
		cin>>vec[i];
	}
	sort(vec.begin(),vec.end());
	long long diff[n-k+1]={},sum[n-k+1];
	for(i=2;i<=k-1;i++)
	{
	diff[1]=diff[1]+vec[i];
	}
		sum[1]=diff[1];
    diff[1]=(k-1)*(vec[k]-vec[1])+diff[i];

long long min=diff[1];
	for(i=2;i<=n-k;i++)
	{
		sum[i]=sum[i-1]+vec[i+k-2]-vec[i+1];
		diff[i]=sum[i]+(vec[i+k-1]-vec[i])*(k-1);
if(diff[i]<min)
{
	min=diff[i];
}
	
	}
	cout<<min;
	

}

