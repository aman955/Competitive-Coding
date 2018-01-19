	#include<iostream>
	using namespace std;
	
	int main()
	{
		int t;
		cin>>t;
		while(t--)
		{
			long long l,i;
			cin>>l;
			long long a,b,maxi=1;
			long long u[l],lo[l];
			for(i=1;i<=l-1;i++)
			{
				cin>>u[i];
			}
			for(i=1;i<=l-1;i++)
			{
				cin>>lo[i];
			}
			for(i=1;i<=l-1;i++)
			{
				maxi=max(maxi,max(u[i],lo[i])+i);
			}
			cout<<max(maxi,l)<<endl;
		}
	}

