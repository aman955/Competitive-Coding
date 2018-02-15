#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,k;
		cin>>n>>k;
		int arr[k];
		for(i=1;i<=k;i++)
		{
		cin>>arr[i];
	   }
		int maxi=max(arr[1],(n-arr[k])+1);
		for(i=2;i<=k;i++)
		{
			maxi=max(maxi,(arr[i]-arr[i-1]+1)/2);
			if(arr[i]%2==0&&arr[i-1]%2==0)
			{
				maxi=max(maxi,(arr[i]-arr[i-1]+2)/2);
			}
			else if(arr[i]%2==1&&arr[i-1]%2==1)
			{
				maxi=max(maxi,(arr[i]-arr[i-1])/2+1);
			}
			else if(arr[i]%2==1&&arr[i-1]%2==0)
			{
				maxi=max(maxi,(arr[i]-arr[i-1]+1)/2);
			}
			else
			{
					maxi=max(maxi,(arr[i]-arr[i-1]+1)/2);
			}
		}
		cout<<maxi<<endl;
	}
}
