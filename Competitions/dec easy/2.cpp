#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

int main()
{
	map<long long int,long int> mp;
	long long n,m;
	cin>>n>>m;
	int i,arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		mp[arr[i]%m]++;
		
	}
	map<long long int, long int>:: iterator itr;
	long long max=-1,temp=-1;
	for(itr=mp.begin();itr!=mp.end();itr++)
	{
		if(itr->second>max)
		{
			temp=itr->first;
			max=itr->second;
		}
		else if(itr->second==max&&itr->first<temp)
		{
			temp=itr->first;
		}
	}
	sort(arr,arr+n);
	vector<long int> vec;
	for(i=0;i<n;i++)
	{
		if(arr[i]%m==temp)
		{
			vec.push_back(arr[i]);
		}
	}
	sort(vec.begin(),vec.end());
	vector<long int>:: iterator it;
	cout<<vec.size()<<endl;
	for(it=vec.begin();it!=vec.end();it++)
	{
		cout<<*it<<" ";
	}
	
}
