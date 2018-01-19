#include<bits/stdc++.h>
using namespace std;

vector<int> vec[10005];
bool visited[100005]={};
long long counti=0;
long long dp[100005]={};

long long dfs(int s,int n)
{
    if(s==n)
    return 1;
    if(dp[s])
    return dp[s];
  
    visited[s]=true;
    long long ans=0;
    for(int i=0;i<vec[s].size();i++)
    {
        	ans=ans+dfs(vec[s][i],n);
    }
    dp[s]=ans;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int a=1,b=1;
    do
    {
        cin>>a>>b;
        vec[a].push_back(b);
    }
    while(a!=0&&b!=0);
    
    long long ans=dfs(1,n);
    cout<<ans<<endl;
}
