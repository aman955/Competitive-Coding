#include<bits/stdc++.h>
using namespace std;

vector<int> vec[200001];
vector< set<int> > s;
int main()
{
	int n,e,x,y,i;
	for(i=0;i<e;i++)
	{
		cin>>x>>y;
		vec[x-1].push_back(y-1);
		vec[y-1].push_back(x-1);
	}
	
	for(i=0;i<200000;i++)
	{
		if(vec[i].size())
		{
			
		}
	}
}
