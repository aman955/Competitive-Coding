#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
	int i,n,a,b;
	cin>>n;
	vector<pair<int,int> > vec;
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		vec.push_back(make_pair(a,b));
	}
	sort(vec.begin(),vec.end());
	int maxi=1,left=vec[0].first,right=vec[0].second;
	for(i=1;i<vec.size();i++)
	{
		if(vec[i].first==left)
		{
			right=min(vec[i].second,right);
		}
		else if(vec[i].first<right)
		{
			right=min(vec[i].second,right);
		}
		else
		{
			right=vec[i].second;
			maxi++;
		}
	}
	cout<<maxi<<endl;
	}
}
