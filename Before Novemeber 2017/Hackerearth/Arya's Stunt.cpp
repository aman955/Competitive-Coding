#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> vec[10005];
int arr[10005]={};
int visited[10005]={};
int index,maxi,sumi,sum,maxv;

void dfs(int s)
{
	if(arr[s]>maxi)
	{
	maxi=arr[s];
	index=s;
}
else if(arr[s]==maxi)
{
	if(s<index)
	{
		index=s;
	}
}

sumi=sumi+arr[s];
	visited[s]=1;
	for(int i=0;i<vec[s].size();i++)
	{
		if(!visited[vec[s][i]])
		{
			dfs(vec[s][i]);
		}
	}
}

int main()
{
	int i,n,e;
	cin>>n>>e;
	for(i=1;i<=n;i++)cin>>arr[i];
	int a,b;
	for(i=1;i<=e;i++)
	{
		cin>>a>>b;
		vec[a].push_back(b);
		vec[b].push_back(a);
	}
	vector<int> temp;
	
	for(i=1;i<=n;i++)
	{
	index=99999;
	maxi=-1;
	sumi=0;
		if(!visited[i])
		{
			dfs(i);
			temp.push_back(index);
		sum+=sumi;
		maxv+=maxi;
		}
		
	}
	sort(temp.begin(),temp.end());
	cout<<maxv<<" "<<(sum-maxv)<<endl;
	for(i=0;i<temp.size();i++)
	cout<<temp[i]<<" ";
}

