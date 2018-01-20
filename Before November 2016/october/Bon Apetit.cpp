#include<iostream>
using namespace std;

int main()
{
	long n,k,i;
	cin>>n>>k;
	int c[n];
	long long sum=0;
	for(i=0;i<n;i++)
	{
		cin>>c[i];
		sum=sum+c[i];
	}
	long charge;
	cin>>charge;
	sum=(sum-c[k])/2;

	if(charge==sum)
	{
		cout<<"Bon Appetit";
	}
	else
	cout<<c[k]/2;
}
	
	

