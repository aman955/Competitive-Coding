#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	long long m,n,i,j;
	cin>>m>>n;
	vector<long long> hor(m),ver(n);
	
	for(i=1;i<=m-1;i++)
	cin>>hor[i];
	
	for(i=1;i<=n-1;i++)
	cin>>ver[i];
	
	hor[0]=0;
	ver[0]=0;
	
	sort(ver.begin(),ver.end());
	sort(hor.begin(),hor.end());
	

	
	
	long long pointhor=1,pointver=1;
	
	i=m-1;
	j=n-1;
	
	long long ans=0;
	while(i>=0&&j>=0)
	{
		if(hor[i]>=ver[j])
		{
			ans=(ans+((hor[i])%mod*(pointver)%mod)%mod)%mod;
			i--;
			pointhor++;
		
		}
		else
		{
			ans=(ans+((ver[j])%mod*(pointhor)%mod)%mod);
			j--;
			pointver++;
			
		}
	}
	
	while(i>=0){
        ans += (hor[i]*pointver)%mod;
        i--;
    }
    while(j>=0){
        ans += (ver[j]*pointhor)%mod;
        j--;
    }
	cout<<ans%mod<<endl;
	
}
	
}
