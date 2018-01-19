

    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;
    const int ma = 1e5+5;
    ll ans=0, ha[10000000], a[ma],n,k;
    vector <int> v[ma];
    void dfs(int r, ll xo)
    {
    	xo^=a[r];
    	ans+=ha[xo^k];
    	ha[xo]++;
    	
    	for(int i=0;i<v[r].size();i++)
    	{
    		dfs(v[r][i],xo);
    		//cout<<xo<<":O"<<endl;
    		
    	}
    	ha[xo]--;
    }
    int main()
    {
    	//freopen("i.txt","r",stdin);
    	cin>>n>>k;
    	for(int i=1;i<=n;i++)
    	{
    		cin>>a[i];
    	}
    	//if(k!=0)
    	ha[0]=1;
    	int x;
    	for(int i=1;i<=n-1;i++)
    	{
    		cin>>x;
    		v[x].push_back(i+1);
    	}
    	dfs(1,0);
    	cout<<ans<<endl;
    	return 0;
    }


