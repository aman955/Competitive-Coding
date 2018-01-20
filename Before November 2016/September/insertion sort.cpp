#include<iostream>
using namespace std;

int main()
{
	int n,i,key;
	cin>>n;
	int a[n],m=0;
	for(i=0;i<n;i++)cin>>a[i];
	for(i=1;i<n;i++)
	{
		key=a[i];
		int j=i-1;
		while(j>=0&&a[j]>key)
		{
			a[j+1]=a[j];
			j--;
        m++;
		}
		a[j+1]=key;
	}

	cout<<m;
}


