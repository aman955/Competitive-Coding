#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	long x=5,sum=0;;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		x=floor(x/2);
		sum=sum+x;
		x=x*3;
	}
	cout<<sum;
}
