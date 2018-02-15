#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 
ll ans[1005];
ll ar[1005][1005];
map<ll , vector<ll> > m, m_count,temp;
 
ll commDiv(ll a,ll b)
{
	if(a==b)return 0;
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
 
void del(vector<ll> &v, ll x)
{

	ll i;
	for(i=0; i<v.size(); i++){
		if(x==v[i])
		break;
	}
 
	v.erase(v.begin() + i);
}
 
void init(ll n)
{
 
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
		temp.clear();
        m.clear();
        m_count.clear();
		ll n;
		cin>>n;
		int brr[1005]
;		for(int i=0;i<n;i++)
	{
	
		brr[i]=(n-i);
	}

		init(n);
		
		ll count[n];
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		ar[i][j]=0;
		memset(count, 0, sizeof count);
 
	
 
		for(ll i=0; i<n; i++)
		{
			for(ll j=0; j<n; j++)
			{
 
				ar[i][j]=commDiv(brr[i],brr[j]);
				count[i] += ar[i][j];
 
 
			}
			m_count[count[i]].push_back(i); 
		}
 
	
 
		ll res[n];
	
		temp = m;
 for(int q=0;q<n;q++)
		res[q]=-1;
		for(ll u=0; u<temp[count[0]].size(); u++)
		{

		m = temp;
		bool flag = false, flag2 = false;
		for(int q=0;q<n;q++)
		res[q]=-1;
 
		for(ll i=0; i<n; i++)
		{

			if(i==0)
			{
				res[i] = m[count[i]][u];
			
				del(m[count[i]], m[count[i]][u]);
 
			}
			else
			{
 
				for(ll j=0; j<temp[count[i]].size(); j++)
				{
 
					for(ll k =0; k<i; k++)
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
	
	if(flag2)
				continue;
				else break;

		
 
		}
 
		for(ll i=0; i<n; i++)
		{
			cout<<res[i]<<"\n";
		}
 
 
 
	}
 
	return 0;
}  

/*
10
0 2 2 1 2 1 2 2 1 1
2 0 1 1 1 1 1 1 1 1
2 1 0 1 2 2 2 2 1 2
1 1 1 0 1 1 1 1 1 1
2 1 2 1 0 1 3 2 1 1
1 1 2 1 1 0 1 1 1 2
2 1 2 1 3 1 0 2 1 1
2 1 2 1 2 1 2 0 1 1
1 1 1 1 1 1 1 1 0 1
1 1 2 1 1 2 1 1 1 0

*/
