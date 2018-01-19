#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector< pair<long,int> > vec;
	int n,i,j;
	long x;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		vec.push_back(make_pair(x,i));
	}
	sort(vec.begin(),vec.end());
	long long min=1000000000000000000;
	
	for(i=0;i<n-1;i++)
	{
		if((vec[i+1].first-vec[i].first)<min && vec[i+1].second<vec[i].second )
		{
			min=vec[i+1].first-vec[i].first;
		}
	}
	cout<<min;
}
