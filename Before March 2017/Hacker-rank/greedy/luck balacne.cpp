#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n,k,x,y;
	cin>>n>>k;
	vector<int> imp,nonimp;
	int i,j=0,l=0;
	for(i=0;i<n;i++)
	{
		cin>>x>>y;
		if(y==1)
		{
			imp.push_back(x);
			j++;
		}
		else
		{
			nonimp.push_back(x);
			l++;
		}
	}
	long long ans=0;
	sort(imp.begin(),imp.end());
	sort(nonimp.begin(),nonimp.end());

	if(k<=imp.size())
	{
		for(i=imp.size()-1;i>imp.size()-k-1;i--)
		{
			ans=ans+imp[i];
		}
		for(i=0;i<imp.size()-k;i++)ans-=imp[i];
		for(i=0;i<nonimp.size();i++)ans+=nonimp[i];
	}
	else
	{
		for(i=0;i<imp.size();i++)ans+=imp[i];
		for(i=0;i<nonimp.size();i++)ans+=nonimp[i];
	}
	cout<<ans;

}
