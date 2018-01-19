#include<iostream>
#include<string>
using namespace std;
int main()
{
int n,k;
cin>>n;
int a[n],i,j;
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{
	for(j=0;j<n-1;j++)
	{
	if(a[j]>a[j+1])
	k=a[j];
	a[j]=a[j+1];
	a[j+1]=k;
}
}
for(i=0;i<n;i++)
{
	cout<<a[i]<<endl;
}
int c=0;
for(i=0;i<n;i++)
	{
		if(a[i]==a[0])
		c++;
	}
cout<<c<<endl;
}
