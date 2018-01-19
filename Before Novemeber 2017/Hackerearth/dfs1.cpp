#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n,m,i,x,y;
	cin>>n>>m;
	vector<int> arr[n+1],brr[n+1];
	for(i=1;i<=m;i++)
	{
		cin>>x>>y;
		arr[x].push_back(y);
		brr[y].push_back(x);
	}
	int count1=0,count2=0;
	for(i=1;i<=n;i++)
	{
		if(arr[i].size()==0)
		count1++;
		if(brr[i].size()==0)
		count2++;
	}
	int maxi=max(count1,count2);
	cout<<maxi<<endl;
	
}
