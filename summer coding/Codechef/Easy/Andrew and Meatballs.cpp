#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  	int n;
  	long long m;
  	cin>>n>>m;
  	int arr[n],i,ans=0;
  	long long sum=0;
  	for(i=0;i<n;i++)cin>>arr[i];
  	sort(arr,arr+n);
  	
  	for(i=n-1;i>=0;i--)
  	{
  		sum+=arr[i];
  		ans++;
  		if(sum>=m)
  		{
  			break;
		}
	}
	if(i==-1)
	{
		cout<<"-1"<<endl;
	}
	else
	cout<<ans<<endl;
	
  }
}
