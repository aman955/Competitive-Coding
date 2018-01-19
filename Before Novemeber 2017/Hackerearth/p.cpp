#include<bits/stdc++.h>
#include<vector>
using namespace std;
    long long int arr[501][501]={};
    bool visited[501][501]={};
    long maxi,n,m;
    vector<pair<int,int> > vec;
    
    void dfs(int i,int j)
    {
    	
    	if(i>n||i<1||j>m||j<1)
    	{
    		return;
		}
    	
    	visited[i][j]=true;
    	if(i==1||j==1||i==n||j==m)
    	{
    		cout<<"YES"<<endl;
    		cout<<vec.size()<<endl;
    		for(int temp=0;temp<vec.size();temp++)
    		{
    			cout<<vec[temp].first<<" "<<vec[temp].second<<endl;
			}
		
			exit(0);
		}
    	if(!visited[i+1][j]&&(arr[i][j]-arr[i+1][j]>=maxi))
    	{
    		visited[i+1][j]=true;
    		vec.push_back(make_pair(i+1,j));
    		dfs(i+1,j);
    		visited[i+1][j]=false;
    		vec.pop_back();
		}
		if(!visited[i-1][j]&&(arr[i][j]-arr[i-1][j]>=maxi))
    	{
    		visited[i-1][j]=true;
    		vec.push_back(make_pair(i-1,j));
    		dfs(i-1,j);
    		visited[i-1][j]=false;
        	vec.pop_back();

		}
		if(!visited[i][j+1]&&(arr[i][j]-arr[i][j+1]>=maxi))
    	{
    		visited[i][j+1]=true;
    			vec.push_back(make_pair(i,j+1));
    		dfs(i,j+1);
    		visited[i][j+1]=false;
    		    		vec.pop_back();

		}
		if(!visited[i][j-1]&&(arr[i][j]-arr[i][j-1]>=maxi))
    	{
    		visited[i][j-1]=true;
    		vec.push_back(make_pair(i,j-1));
    		dfs(i,j-1);
    		visited[i][j-1]=false;
    		vec.pop_back();
		}
		
	}

int main()
{
	    int d1,d2;
	    cin>>n>>m;
	int i,j;
	    for(i=1;i<=n;i++)
	    {
	    	for(j=1;j<=m;j++)
	    	cin>>arr[i][j];
		}
		cin>>d1>>d2>>maxi;
	    dfs(d1,d2);	
	    vec.push_back(make_pair(d1,d2));
	    cout<<"NO"<<endl;
}
	

