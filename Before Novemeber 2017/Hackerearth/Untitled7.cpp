#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int first[n+1],second[n+1];
		for(i=1;i<=n;i++)cin>>first[i];
		for(i=1;i<=n;i++)cin>>second[i];
		int fts[n],stf[n];
		fts[0]=0;
		stf[0]=0;
		for(i=1;i<=n-1;i++)cin>>fts[i];
		for(i=1;i<=n-1;i++)cin>>stf[i];
		
		long long T[3][n+1];
		T[2][0]=T[1][0]=0;
		for(i=1;i<=n;i++)
		{
			T[1][i]=min(T[1][i-1]+first[i],T[2][i-1]+stf[i-1]+first[i]);
			T[2][i]=min(T[2][i-1]+second[i],T[1][i-1]+fts[i-1]+second[i]);
		}
		cout<<min(T[1][n],T[2][n])<<endl;
	}
}
