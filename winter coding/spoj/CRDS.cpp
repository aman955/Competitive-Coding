#include<bits/stdc++.h>
using namespace std;

bool prime[10000];
vector<int> vec[10000];
bool check[10000];

void sieve()
{
	memset(prime,true,sizeof(prime));
	prime[1]=false;
	prime[0]=false;
	int i,j;
	for(i=2;i<=10000;i++)
	{
		for(j=i*i;j<=10000;j=j+i)
		{
			if(prime[j])
			prime[j]=false;
		}
	}
}

int main()
{
	int i,j,k,temp0,temp,v;
	sieve();
	for(i=1000;i<=9999;i++)
	{
		temp=i;
		if(prime[i])
		{
			check[i]=true;
			for(j=1;j<=4;j++)
			{
				v=pow(10,j-1);
				for(k=0;k<=9;k++)
				{
					temp0=temp-((temp/v)%10)*v+k*v;
					
					if(prime[temp0]&&temp0!=temp&&(temp0/1000!=0)&&!check[temp0])
					{
					
						vec[temp0].push_back(temp);
						vec[temp].push_back(temp0);
					}
				}
				
			}
		}
	}
	int t;
	cin>>t;
	while(t--)
	{
	int a,b,c,r=0;
	bool vis[10000];
    int level[10000]={};
    memset(vis,false,sizeof(vis));
	cin>>a>>b;
	if(a==b)
	{
	cout<<0<<endl;
	r=1;
    }
	else
	{
		queue<int> q;
		q.push(a);
		vis[a]=true;
		level[a]=0;
		while(!q.empty())
		{
			int c=q.front();
			q.pop();
			for(i=0;i<vec[c].size();i++)
			{
				if(!vis[vec[c][i]])
				{
					level[vec[c][i]]=level[c]+1;
					if(vec[c][i]==b)
					{
						cout<<level[b]<<endl;
						r=1;
					}
					q.push(vec[c][i]);
					vis[vec[c][i]]=true;
				}
			}
		}
		if(r==0)
		cout<<"Impossible"<<endl;
	}
    }
}
