#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n,r=0,i,maxsofar,maxendinghere,maxnoncon=0,maximum;
		cin>>n;
		long a[n];
		for(i=0;i<n;i++) cin>>a[i];
		maxsofar=maxendinghere=a[0];
		for(i=1;i<n;i++)
		{
			if(a[i]>=0)
			{
			maxnoncon = maxnoncon+a[i];
			r++;
		    }
			maxendinghere = max(a[i], maxendinghere+a[i]);
			maxsofar = max(maxendinghere,maxsofar);
		}
		if(a[0]>0)
		maxnoncon=maxnoncon+a[0];
		if(maxnoncon==0&& r==0)
		{
			maxnoncon=a[0];
			for(i=1;i<n;i++)
			{
				if(a[i]>maxnoncon)
				{
					maxnoncon=a[i];
				}
			}
		}
		cout<<maxsofar<<" "<<maxnoncon<<endl;
		
	}
}
