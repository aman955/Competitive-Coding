#include<iostream>
using namespace std;
int arr[2500]={};

int checkprime(int x)
{
	for(int i=2;i<=x/2;i++)
	{
		if(x%i==0)
		return 0;
	}
	return 1;
}

int main()
{
	int t;
	cin>>t;
	
	for(int i=2;i<=2499;i++)
	{
		arr[i]=checkprime(i);
	}
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		int x=a+b;
		for(int i=x+1;i<3000;i++)
		{
			if(arr[i])
			{
				cout<<i-x<<endl;
				break;
			}
		}
	}
}
