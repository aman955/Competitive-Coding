#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,n,k;
	cin>>n>>k;
	long int arr[n+1];
	for(i=1;i<=n;i++)cin>>arr[i];

    long long int sumi=0;
	for(i=1;i<=n;i++)
	{
		sumi+=arr[i];
	}
	
	set< pair< long long, pair<int,int> > > sets;
	sets.insert(make_pair(sumi, make_pair(1,n)));
	while(k-- && !sets.empty())
	{
		pair<long long, pair<int,int> > top= *sets.rbegin();
		long long int sum;
		int l,r;
		sum=top.first;
		l= top.second.first;
		r= top.second.second;
		cout<<sum<<" ";
		if(l!=r)
		{
				sets.insert(make_pair((sum-arr[r]),make_pair(l,r-1)));
			sets.insert(make_pair((sum-arr[l]),make_pair(l+1,r)));
		
		}
				sets.erase(top);

		
		
	  }  
	
}
