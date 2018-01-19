#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int x,sum1=0,sum2=0,i;
	for(i=0;i<n/2;i++)
	{
		cin>>x;
		sum1=sum1+x;
	}
	for(i=0;i<n/2;i++)
	{
		cin>>x;
		sum2=sum2+x;
	}
	cout<<abs(sum1-sum2);
}
