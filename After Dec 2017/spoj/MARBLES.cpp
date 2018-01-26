#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long int t,i;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		n--;
		k--;
	if(k>n-k) k=n-k;
    
    long long ans=1;
    
    for(int i=0;i<k;i++) ans=ans*(n-i)/(i+1);
    cout<<ans<<endl;
	}
}
