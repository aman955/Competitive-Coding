#include<iostream>
#include<vector>
#include<set>
using namespace std;
int dp_maxpaint[100005]={};

void printmaxi(int n,int vec[])
{
	for(int i=9;i>0;i--)
	{
		int t;
		t=vec[i];
		if(n==t)
		{
		cout<<i; 
		break;
	}
	}
}


int main()
{
	int n,i,j;
	cin>>n;
	int v[10];
	set<int> setds;
	for(i=1;i<=9;i++)
	{
		cin>>v[i];
		setds.insert(v[i]);
	}
	
	for(i=1;i<=n;i++)
	{
		dp_maxpaint[i]=-121212;
	}
	for(set<int>::iterator it=setds.begin();it!=setds.end();it++)
	{
		dp_maxpaint[*it]=1;
	}
	

	
	dp_maxpaint[0]=0;
	for(i=1;i<=n;i++)
	{
		
		for(set<int>::iterator it=setds.begin();it!=setds.end();it++)
	{
		if(i<*it)continue;
		dp_maxpaint[i]=max(dp_maxpaint[i-(*it)]+1,dp_maxpaint[i]);
	}
		
	}
	if(dp_maxpaint[n]==-121212)
	{
	cout<<"-1"<<endl; return 0;
}



	int maxi,temp,t=0;
	for(i=n;i>0;i--)
	{
		maxi=-9999999;
			for(set<int>::iterator it=setds.begin();it!=setds.end();it++)
	{
	
	    if(*it>=i)continue;
		if(maxi<dp_maxpaint[i-*it]);
		{
		temp=(*it);
		maxi=dp_maxpaint[i-*it];
	    }
	}
	printmaxi(i-temp,v);
	}
	
}
