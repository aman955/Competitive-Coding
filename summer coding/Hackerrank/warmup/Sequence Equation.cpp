#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<int,int> mp;
	int n,i,x;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		mp[x]=i+1;
	}
	for(i=0;i<n;i++)
	{
		cout<<mp[mp[i+1]]<<endl;
	}
}
