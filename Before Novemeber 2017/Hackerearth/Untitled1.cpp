#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
	int n,low,high,i,x;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)cin>>arr[i];
	vector<int> sum(n);
	
	sum[0]=arr[0];
	for(i=1;i<n;i++)
	{
	    sum[i]=sum[i-1]+arr[i];
	}
	int q;
	cin>>q;
	while(q--)
	{
	    cin>>x;
	    if(x>sum[n-1])
	    {
	        cout<<"-1"<<endl;
	        continue;
	    }
	   {
low=lower_bound(sum.begin(),sum.end(),x)-sum.begin()+1;
cout << low "\n";
}
	}
	
}
	

