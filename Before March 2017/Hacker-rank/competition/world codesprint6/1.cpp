#include<iostream>
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	if(a[i]%5>=3&&a[i]>=38)
	{
	a[i]=a[i]/5;
	a[i]=(a[i]+1)*5;
    }
}
	for(i=0;i<n;i++)
	cout<<a[i]<<endl;
}
