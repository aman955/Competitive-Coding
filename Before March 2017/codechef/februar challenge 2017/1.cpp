#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n,count=0;
		cin>>n;
		int arr[n+1],min=n,y=1;
		for(long i=0;i<n;i++)
		{
		cin>>arr[i];
		if(y&&arr[i]==0)
		{
			y=0;
			min=i;
		}
		if(arr[i]==1)
		{
			count++;
		}
	    }
	    long long answer=(n-count)*1000+(n-min)*100;
	    cout<<answer<<endl;
	    
	    
	}
}
