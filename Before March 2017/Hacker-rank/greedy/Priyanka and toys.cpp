#include<iostream>
using namespace std;

int weight[10005]={};
int main()
{
	long n,i,x;
	cin>>n;
	int count=0;
	for(i=0;i<n;i++)
	{
		cin>>x;
		weight[x]=1;
	}
	for(i=1;i<=10000;i++)
	{
		if(weight[i]!=0)
		{
		
		count++;
		i=i+4;	
		}
	}
	cout<<count;
}
