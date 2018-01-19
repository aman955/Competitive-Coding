#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	vector<int> v(n+1),u(n+1);
	for(i=1;i<=n;i++)
	{
		cin>>v[i];
		u[i]=v[i];
	}
	sort(u.begin(),u.end());
	long long dp1[n+1],dp2[n+1];
	dp1[0]=0;dp2[0]=0;
	for(i=1;i<=n;i++)
	{
		dp1[i]=dp1[i-1]+v[i];
		dp2[i]=dp2[i-1]+u[i];
	}
	int p;
	cin>>p;
	while(p--)
	{
	int l,r,t;
	cin>>t>>l>>r;
	if(t==1)
	cout<<dp1[r]-dp1[l-1]<<endl;
	else 
	cout<<dp2[r]-dp2[l-1]<<endl;
}
}
