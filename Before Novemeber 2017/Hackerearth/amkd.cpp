#include<iostream>
using namespace std;

int sumdig(long long N)
{
	int temp=0,c;
	while(N!=0)
	{
		c=N%10;
		temp+=c;
		N=N/10;
	}
	return temp;
}

bool func(long long m,long long n)
{
	if(m==1||m==4)
	return true;
	if(m==n)
	return false;
	else
	{
	if(func(sumdig(m*m),n));
	return true;
}
	
}


int main()
{
	long long i,j;
	int dp[91]={};
	for(i=1;i<=90;i++)
	{
		cout<<i<<endl;
		if(func(sumdig(i*i),i))
		dp[i]=1;
	}
	for(i=1;i<=91;i++)cout<<i<<" "<<dp[i]<<endl;
	int t;
	while(t--)
	{
		
	}
	
}
