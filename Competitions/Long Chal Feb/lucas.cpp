#include<iostream>
#define mod 1000000007
using namespace std;

long long arr[5001][5001]={};



int main()
{



	long long int t,n,p;
	cin>>t;
	while(t--)
	{
		int counti=0;
		cin>>n>>p;
		
			arr[0][0]=1;
	for(int i=0;i<=n;i++)
	arr[i][0]=1;
	long long temp;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
	{
		
			arr[i][j]=(arr[i-1][j]%p);
			temp=(i*(arr[i-1][j-1])%p)%p;
		arr[i][j]=(arr[i][j]+temp)%p;
	}
	}
	
		
		
		for(int i=0;i<=n;i++)
		{
			if((arr[n][i]))
			counti++;
		}
		cout<<(counti)%mod<<endl;
		
			for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
	{
		
			arr[i][j]=0;
	}
	}
		
	}
}
