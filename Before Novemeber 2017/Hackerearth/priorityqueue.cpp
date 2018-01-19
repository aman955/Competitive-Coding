#include <bits/stdc++.h>
#include<tuple>
using namespace std;

priority_queue< pair<long long int,long long int> > q;

int main()
{
    int n;
    cin>>n;
    long long id,ans;
    long long zscore,post,like,comment,share;
    while(n--)
    {
        cin>>id>>zscore>>post>>like>>comment>>share;
        
        ans=post*50+like*5+comment*10+share*20-zscore;
        q.push(make_tuple(ans,id,zscore+ans));
    }
    int t=5;
    while(!q.empty()&&t--)
    {
        tuple<long long, long long,long long> p=q.top();
        q.pop();
        cout<<p.second<<" "<<p.first<<endl;;
        
        
    }
}
