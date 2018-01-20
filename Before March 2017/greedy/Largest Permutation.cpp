#include<iostream>
#include<map>
using namespace std;

int main()
{
	long n,x,i,j,f;
	map<long,long> mp;
	map<long,long>::iterator g;
	long long k;
	cin>>n>>k;
	long max=n;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		mp[i]=x;
	}
	if(k>=n)
	{
		for(i=n;i>0;i++)
		cout<<i<<" ";
	}
	else
	{
		for(i=1;i<=k;i++)
		{
			j=mp[1];
			f=mp.find(max)->second;
			cout<<f<<endl;
			mp[i]=max;
			mp[f]=j;
			max--;
		}
		for(i=1;i<=n;i++)
		{
			cout<<mp.at(i)<<" ";
		}
	}
	
}
