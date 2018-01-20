#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
			int i,n,k;
			cin>>n>>k;
			vector<int> a(n),b(n);
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
			for(i=0;i<n;i++)
			{
				cin>>b[i];
			}
			
			sort(a.begin(),a.end());
			sort(b.begin(),b.end());
			for(i=0;i<n;i++)
			{
				if(a[i]+b[n-1-i]<k)
				{
					cout<<"NO"<<endl;
					goto aman;
				}
			}
			cout<<"YES"<<endl;
			aman:  ;
	}
}
