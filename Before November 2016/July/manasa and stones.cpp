#include<iostream>
using namespace std;

int main()
{
	int a,b,n,t;
	long d;
	cin>>t;
	while(t--)
	{
	cin>>n>>a>>b;	
	for(int i=0;i<n;i++)
	{
		cout<<a*(n-1-i)+b*i<<" ";
	}
	cout<<endl;
	}
}
