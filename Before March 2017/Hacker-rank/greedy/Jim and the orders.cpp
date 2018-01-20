#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,t,d;
	cin>>n;
	vector< pair<int, int> > vec(n+1);  
	for( i=1;i<=n;i++)
	{
		cin>>t>>d;
		vec[i].first=t+d;
		vec[i].second=i;av
	}
	sort(vec.begin(),vec.end());

for(i=1;i<=n;i++)
{
	cout<<vec[i].second;
}
}
