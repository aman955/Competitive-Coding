#include<iostream>
using namespace std;

int main()
{
	int n=1;
	while(1)
	{
		cin>>n;
		if(n==-1)
		break;
		int arr[n],i,sum=0;
		for(i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	    }
	    int avg=sum/n,ans=0;
	    if(avg*n==sum)
	    {
	    	for(i=0;i<n;i++)
	    	{
	    		if(arr[i]<avg)
	    		ans=ans+avg-arr[i];
			}
			cout<<ans<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
	}
}
