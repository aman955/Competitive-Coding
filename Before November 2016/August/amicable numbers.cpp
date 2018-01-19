#include<iostream>
using namespace std;
long long div(int x);

int main()
{
	int t;
	cin>>t;
	long long sum=0;
	long long a[100001]={0},i,N,k;
	a[1]=1;
	a[2]=1;
	a[3]=1;
	for(long i=4;i<10001;i++)
	{
		a[i]=div(i);
	}
	while(t--)
	{
		sum=0;
	cin>>N;
	for(int i=4;i<N;i++)
	{
		k=a[i];
		if(a[k]==i&&k!=i)
		{
		
			sum=sum+i;
		}
	}
	cout<<sum;
}
}

long long div(int x)
{
	long long sum=0;
	for(int i=x/2;i>0;i--)
	{
		if(x%i==0)
		{
			sum=sum+i;
		}
	}
	return sum;
}
