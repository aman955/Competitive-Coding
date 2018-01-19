#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,j;
	cin>>t;
	while(t--)
	{
		int n,m;
	cin>>n>>m;
	long minsal[n];
	for(i=0;i<n;i++)
	cin>>minsal[i];
	vector<pair<long,pair<int,int> > > offsal_maxjob;
	long offsal;
	int maxjob;
	for(i=0;i<m;i++)
	{
		cin>>offsal>>maxjob;
		offsal_maxjob.push_back(make_pair(offsal,make_pair(i,maxjob)));
	}
	sort(offsal_maxjob.rbegin(),offsal_maxjob.rend());
	string qual[n];
	for(i=0;i<n;i++)
	{
	
			cin>>qual[i];
		
	}
	bool companies[m]={},placed[n]={};
	long long totalsal=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(qual[i][offsal_maxjob[j].second.first]-'0')
			{
			if(offsal_maxjob[j].first>=minsal[i]&& offsal_maxjob[j].second.second>0)
			{
				offsal_maxjob[j].second.second=offsal_maxjob[j].second.second-1;
				companies[offsal_maxjob[j].second.first]=true;
				placed[i]=true;
				totalsal+=offsal_maxjob[j].first;
				goto aman;
			}
		    }
		}
		aman: ;
	}
	int stud=0,comp=0;
	for(i=0;i<n;i++)
	{
		if(placed[i])
		stud++;
	}
	for(i=0;i<m;i++)
	{
		if(companies[i]==false)
		comp++;
	}
	cout<<stud<<" "<<totalsal<<" "<<comp<<endl;
	
    }
    
}
/*
1
5 6
5000 10000 3000 20 100
10000 2
800 2
600 1
10 8
1000 9
2000 10
1 1 1 1 1 1
1 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 1
1 0 0 1 0 0
*/
