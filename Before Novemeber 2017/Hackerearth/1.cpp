#include <iostream>
using namespace std;


long dp[1000]={};

long long recur(long long x)
{
	if(dp[x])
	return dp[x];
	
	long long temp=x,c,ans=0;
	while(temp!=0)
	{
		c=temp%10;
		ans=ans+c*c;
		temp=temp/10;
	}
	dp[x]++;
	if(ans/10==0&&ans!=1)
	{
		dp[ans]=-1; 
	}
	else
	{
	dp[ans]=recur(ans)+1;
    }
}

int main() {
	
	// your code here
int t;
cin>>t;
for(int i=1;i<=t;i++)
{
long n;
cin>>n;
long long ans=recur(n);
cout<<ans<<endl;
}

}
