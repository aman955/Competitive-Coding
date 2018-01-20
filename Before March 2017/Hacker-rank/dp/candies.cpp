#include<iostream>
using namespace std;

int main()
{
	long n,i;
cin>>n;
long rat[n],can[n];
	for(long i=0;i<n;i++)
	{
		cin>>rat[i];
		can[i]=1;
	}
	for(i=0;i<n-1;i++)
	{
		if(rat[i]>rat[i+1]&&can[i]<=can[i+1])
		{
			can[i]+=1;
		}
		if(rat[i+1]>rat[i]&&can[i+1]<=can[i])
		{
			can[i+1]+=1;
		}
		
	}
	
	for(i=n-1;i>0;i--)
	{
		if(rat[i-1]>rat[i]&&can[i-1]<=can[i])
		{
			can[i-1]+=1;
		}
		if(rat[i]>rat[i-1]&&can[i]<=can[i-1])
		{
			can[i]+=1;
		}
	}
	long sum=0;
	for(i=0;i<n;i++)
	{
		sum+=can[i];
	}
	cout<<sum;
}
