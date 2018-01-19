#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int id,profit,dead,n;
	cin>>n;
	vector<int> vec;
	int slot[n]={};
	for(int i=0;i<n;i++)
	{
		cin>>dead>>profit;
		vec.push_back(make_pair(profit,make_pair(dead,i)));
	}
}
