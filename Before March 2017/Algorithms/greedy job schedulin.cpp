#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int id,profit,dead,n;
	cin>>n;
	vector< pair<int, pair<int,int> > > vec;
	int slot[n]={};
	for(int i=0;i<n;i++)
	{
		cin>>dead>>profit;
		vec.push_back(make_pair(profit,make_pair(dead,i)));
	}
	int time=0;
	sort(vec.rbegin(),vec.rend());
	int result[n];
	for(int i=0;i<n;i++)
	{
		for(int j=min(vec[i].second.first , n)-1;j>=0;j++)
		{
			if(slot[j]==0)
			{
				result[j]=i;
				slot[j]=1;
				break;
			}
		}
	}
	
	for(int i=0;i<n;i++)
	if(slot[i])
	cout<<vec[result[i]].second.first<<endl;
	
	
	
}
