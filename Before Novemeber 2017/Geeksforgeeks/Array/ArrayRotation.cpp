#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	if(b==0)
	{
		return a;
	}
	else
	return gcd(b,a%b);
}

void leftrotate(int arr[],int n,int d)
{
	int a=gcd(n,d);
	int i,k;
	for(i=0;i<a;i++)
	{
		int temp=arr[i];
		int j=i;
		while(1)
		{
			k=j+d;
			if(k>=n)
			k=k-n;
			if(k==i)
			break;
			arr[j]=arr[k];
			j=k;
		}
		arr[j]=temp;
	}
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	int d,i;
	cin>>d;
	leftrotate(arr,n,d%n);
	for(i=0;i<n;i++)cout<<arr[i]<<" ";
}
