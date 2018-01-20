#include<iostream>
using namespace std;

int main()
{
	int n,k,pages,t=1,m,l,ans=0,j;
	cin>>n>>k;
	int chap_que[n+1];
	for(int i=1;i<n+1;i++)
	{
		cin>>chap_que[i];
		pages=((chap_que[i]-1)/k)+1;
		m=1;
		for(j=1;j<=pages;j++)
		{
			for(l=m;(l<=m*k&&l<=chap_que[i]);l++)
			{
				if(t==l)
				{
				ans++;	
				}
			}
			m=m*k;
			t++;
		}
	}
	cout<<ans;
}
