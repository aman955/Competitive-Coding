#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	long  key,i,sum,mod=1000000;
	cin>>n>>sum>>key;
	int arr[n];
	for(i=0;i<n;i++)cin>>arr[i];
	queue<pair<long ,long> >q;
	for(i=0;i<n;i++)
	{
		q.push(make_pair((key*arr[i])%mod,1));
	}
	while(!q.empty())
	{
	pair<long,long > p=q.front();
	q.pop();
	long f=p.first,s=p.second;
	if(s==n+1)
	{
		cout<<-1<<endl;
		break;
	}
	if(f==sum)
	{
		cout<<p.second<<endl;
		break;
		}	
		for(i=0;i<n;i++)
		{
			q.push(make_pair((f*arr[i])%mod,s+1));
		}
		
	}
}
