#include<bits/stdc++.h>
using namespace std;

int main()
{
	long n,k,a,b,i,j;
	cin>>n>>k;
	vector< pair<int,int> > vec;
	long maxi=-1,mini=9999999999999;
	for(i=1;i<=n;i++)
	{
		cin>>a>>b;
		vec.push_back(make_pair(b,a));
		maxi=max(a,maxi);
		mini=min(a,mini);
	}
	if(abs(maxi-mini)<k)
	{
		cout<<-1;
		return 0;
	}
	
	sort(vec.begin(),vec.end());
	
	for(i=n-1;i>=0;i--)
	{
		
		
		for(j=i-1;j>=0;j--)
		{
			if(abs(vec[i].second-vec[j].second)>=k)
			{
				cout<<vec[i].first+vec[j].first<<endl;
				return 0;
			}
		}
	}
	cout<<-1<<endl;
	

}
