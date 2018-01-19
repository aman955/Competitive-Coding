#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
	map<ll, set<ll> >my;
	map<ll,set<ll> >::iterator it;
 
	ll n,q;
	cin>>n>>q;
	ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll b[n];
	ll temp=0;
	for(ll i=0;i<n;i++)
	{
		temp=temp^a[i];
		b[i]=temp;
		my[temp].insert(i);
	}
	ll m=INT_MAX;
	while(q--)
	{
		ll x;cin>>x;
 
		if(x==1)
		{
			ll y;
			cin>>x>>y;
 
			a[x-1]=y;
			m=min(x-1,m);
		}
		else
		{
			ll y;
			cin>>x>>y;
			if(m!=INT_MAX)
			{
				temp=b[m-1];
				for(ll i=m;i<n;i++)
				{
				        my[b[i]].erase(i);
					temp=temp^a[i];
					b[i]=temp;
				        my[b[i]].insert(i);
 
				}
			}
 
 
			if(my[y].begin()==my[y].end()||(*my[y].begin())>(x-1))
			{
				cout<<0<<endl;
			}
			else
			{
				ll c=0;
				c=my[y].upper_bound(x-1)-my[y].begin();
				cout<<c<<endl;
			}
			m=INT_MAX;
		}
	}
 
}
 
