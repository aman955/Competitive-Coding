#include<iostream>
#include<vector>
#include<algorithm>
#define modi 1000000007
using namespace std;

vector<int> vec[100005];
long long int arr[100005]={};
int visited[100005]={};
long long int index,maxi,sum,maxv;
long long int counti;

void dfs(int s)
{
	if(arr[s]>maxi)
	{
	maxi=arr[s];
	counti=1;

}
else if(arr[s]==maxi)
{
	counti=(counti%modi+1);
}

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

	long long int ans=1;
	for(i=1;i<=n;i++)
	{
	counti=1;
	maxi=-1;
		if(!visited[i])
		{
			dfs(i);
		ans=((ans%modi)*(counti%modi))%modi;
		}
		
	}
	cout<<ans<<endl;
}

