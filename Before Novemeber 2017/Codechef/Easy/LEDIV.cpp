#include<iostream>
using namespace std;


int minp[100001];

int gcd(int a,int b)
{
	while(b>0)
	{
		int c=a%b;
		a=b;
		b=c;
	}
	return a;
}


int main()
{
	int i,j;
	minp[1]=-1;
	for(i=2;i<=100000;i++)
	{
		if(minp[i]==0)
		{
			for(j=i;j<=100000;j+=i)
			{
				if(minp[j]==0)
				minp[j]=i;
			}
		}
	}
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)cin>>arr[i];
		int d=0;
		for(i=0;i<n;i++)
		{
			d= gcd(d,arr[i]);
		}
		cout<<minp[d]<<endl;
		
	}
}
