#include<iostream>
using namespace std;

int main()
{
	int i,n;
	cin>>n;
	int s[n],sum=0,ans=0;
	for(i=0;i<n;i++)cin>>s[i];
	
	int d,m;
	cin>>d>>m;
	if(m>n)
	{
		cout<<"0"<<endl;
	}
	else
	{
		for(i=0;i<m;i++)
		{
			sum+=s[i];
		}
		if(sum==d)
		{
			ans++;
		}
		for(i=1;i<=n-m;i++)
		{
			sum=sum-s[i-1]+s[i+m-1];
			if(sum==d)
			ans++;
		}
	}
	cout<<ans;
}
