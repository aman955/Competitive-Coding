#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<long long> vec(n+1);
	vector< pair<ll,ll> > tri(n);
	
	long long l,i,r;
	cin>>l>>r;
	for(i=1;i<=n;i++)
	{
		cin>>vec[i];
	}
	sort(vec.begin(),vec.end());
	
	if(vec[n]+vec[n-1]-1 < l){
		cout<<0;
		return 0;
	}
	
	
	for(int i=1;i<n;i++){
		if(vec[i+1]-vec[i]+1 >r )
		{
			cout<<"jdjdj";
			tri[i-1].first = 0;
			tri[i-1].second = 0;
			continue;
		}
		if(vec[i+1]+vec[i]-1 < l){
			cout<<"asd";
			tri[i-1].first = 0;
			tri[i-1].second = 0;
			continue;
		}
		if(vec[i+1]-vec[i]+1 < l)
			tri[i-1].first=l;
		else
			tri[i-1].first = vec[i+1]-vec[i]+1;
			
		if(vec[i+1]+vec[i]-1 > r)
			tri[i-1].second = r;
		else
			tri[i-1].second = vec[i+1]+vec[i]-1;
			
				
	}
	
	tri[n-1].first = tri[n-2].first; 
	tri[n-1].second = tri[n-2].second;
	sort(tri.begin(),tri.end());
	
	i=0;
	int j=0,k=0;
	while(tri[k].first==0) k++;
	
	
//	for(int i=0;i<n;i++) cout<<tri[i].first<<" ";
//	cout<<endl;
//	for(int i=0;i<n;i++) cout<<tri[i].second<<" ";
//	cout<<endl;
	
	ll ans=0,max=0;
	for(i=k,j=k;i<=n-1&&j<=n-1;)
	{
		max=tri[j].second;
	    while((j<n-1) && (max>=tri[j+1].first))
	    {
	    	if(tri[j+1].second>max)
	    	max=tri[j+1].second;
	    	
	    	j++;
		}
		if(j==n-1 && tri[j-1].second>=tri[j].first){
			if(max<tri[j].second) max=tri[j].second;
		}
//		cout<<"max is:"<<max<<endl;
	    ans=ans+max-tri[i].first+1;
//	    cout<<"Answer is:"<<ans<<endl;
	    
	    i=j+1;
	    j++;
	}
	
	cout<<ans;
}
