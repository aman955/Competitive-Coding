#include<iostream>
using namespace std;

long long dig[10]={};

long long  funci(int n)
{
	long long int temp=n,c;
	long long sum=0;
	while(temp!=0)
	{
		c=temp%10;
		temp=temp/10;
		sum=sum+dig[c];
	}
	temp=n;

		while(temp!=0)
	{

		c=temp%10;
		if(c!=0&&(sum%c)!=0)
		{
			return false;
			break;
		}
		temp=temp/10;
	}
	return true;
}
int main()
{
	long long int i,j;
	long long ans=1;
	for(i=1;i<=9;i++)
	{
		ans=1;
		for(j=1;j<=i;j++)
		{
			ans=(ans*i);
		}
		dig[i]=ans;
	}
	int t;
	
cin>>t;
long long counti=0;

	long long int l,r;

	counti=0;
	for(i=0;i<=1000;i++)
	{
		if(funci(i))
		cout<<i<<endl;
	}
	

}
