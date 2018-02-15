#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
ll ans[1005];
ll ar[1005][1005];
map<ll , vector<ll> > m, m_count,temp;
 
ll commDiv(ll a,ll b)
{
    // find gcd of a,b
    ll n = __gcd(a, b);
 
    // Count divisors of n.
    ll result = 0;
    for (ll i=1; i<=sqrt(n); i++)
    {
        // if 'i' is factor of n
        if (n%i==0)
        {
            // check if divisors are equal
            if (n/i == i)
                result += 1;
            else
                result += 2;
        }
    }
    return result;
}
 
void del(vector<ll> &v, ll x){
	ll i;
	for(i=0; i<v.size(); i++){
		if(x==v[i])
		break;
	}
 
	v.erase(v.begin() + i);
}
 
void init(ll n){
 
	memset(ans, 0, sizeof ans);
 
	for(ll i=1; i<=n; i++)
	{
		for(ll j=1; j<=n; j++){
 
			if(i!=j)
			{
				ans[i] += commDiv(i, j);
			}
 
		}
		m[ans[i]].push_back(i); 
 
	}
 
}
 
 
int main() {
 
	ll t;
	cin>>t;
 
 int p;
	while(t--)
	{
        m.clear();
        m_count.clear();
		ll n;
		cin>>n;
		init(n);
		
		ll count[n];
		for(int i=0;i<=1000;i++)
		for(int j=0;j<=1000;j++)
		ar[i][j]=0;
		memset(count, 0, sizeof count);
 	int brr[1005];		
	 for(int i=0;i<n;i++)
	{
	
		brr[i]=(n-i);
	}
	int ut,counti=0;
 
		for(ll i=0; i<n; i++)
		{
			for(ll j=0; j<n; j++)
			{
				if(i==j)
				ut=0;
				else 
               ut=commDiv(brr[i],brr[j]);
				cin>>ar[i][j];
			
				if(ut==ar[i][j])
				counti++;
				count[i] += ar[i][j];
 
 
			}
			m_count[count[i]].push_back(i); 
		}
	
		if(counti==(n*n))
		{
			for(int i=n;i>=1;i--)
			cout<<i<<endl;
			continue;
		}
 
	
 
		ll res[n];
		//bool flag = false;
		temp = m;
 
 
		for(ll u=0; u<temp[count[0]].size(); u++)
		{
 
		m = temp;
		bool flag = false, flag2 = false;
		memset(res, -1, sizeof res);
 
		for(ll i=0; i<n; i++)
		{
 
			if(i==0)
			{
				res[i] = m[count[i]][u];
				del(m[count[i]], m[count[i]][u]);
 
			}
			else
			{
 
				for(ll j=0; j<m[count[i]].size(); j++)
				{
 
					for(ll k =0; k<=i; k++)
					{
 
					if(ar[i][k] == commDiv(m[count[i]][j], res[k]))
					{
					
					}
					else
					{
						flag = true;
						break;
 
					}
 
 
 
					}
 
					if(flag)
					{
						flag = false;
						if(j == m[count[i]].size() -1)
						{
							flag2 = true;
							break;
						}
						else 
						continue;
					}
					else
					{
						res[i] = m[count[i]][j];
						del(m[count[i]], m[count[i]][j]);
						break;
					}
 
				}	
 
 
 
			}
 
 
 
 
		}
	
	for(p=0;p<n;p++)
	{
		if(res[p]==-1)
		break;
	}
	if(p==n)
	break;
	else
	continue;
 
		
 
		}
 
		for(ll i=0; i<n; i++)
		{
			cout<<res[i]<<"\n";
		}
 
 
 
	}
 
	return 0;
}  
