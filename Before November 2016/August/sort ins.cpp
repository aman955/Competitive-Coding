#include<iostream>
using namespace std;

int main()
{
	int n,j,i,e;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	e=a[n-1];
	for(i=n-2;i>=0;i--)
	{
		if(a[i]>e)
		{
			a[i+1]=a[i];
				for(j=0;j<n;j++)
	             cout<<a[j];
	             cout<<endl;
			
		}
		else
		{
			a[i+1]=e;
				for(j=0;j<n;j++)
	             cout<<a[j];
	             break;
			
		}
		
	}
}
