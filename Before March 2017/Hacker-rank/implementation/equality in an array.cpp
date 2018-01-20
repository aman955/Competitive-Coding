#include<iostream>
using namespace std;

int main()
{
	int n,i,max;
	cin>>n;
	if(n==1)
	{
		cout<<"1";
		return 0;
	}
	int a[n],b[101]={0};
	for(i=0;i<n;i++)
	{
	cin>>a[i];
     b[a[i]]++;
}
max=1;
for(i=2;i<101;i++)
{
	if(b[i]>b[max])
	max=i;
}
cout<<n-b[max];
}
