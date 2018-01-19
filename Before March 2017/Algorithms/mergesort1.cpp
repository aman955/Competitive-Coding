#include<iostream>
#include<cmath>
#define INF 1000000
using namespace std;

void merge(int arr[],int p,int q,int r)
{
	int i,j,k;
	int n1=q-p+1;
	int n2=r-q;
	int l[n1+1],ri[n2+1];
	for(i=0;i<n1;i++)
	l[i]=arr[p+i];
	for(i=0;i<n2;i++)
	ri[i]=arr[q+i+1];
	l[n1]=INF; ri[n2]=INF;
	i=0;j=0;
	for(k=p;k<=r;k++)
	{
		if(l[i]<=ri[j])
		{
			arr[k]=l[i];
			i++;
		}
		else
		{
			arr[k]=ri[j];
			j++;
		}
	}
}

void mergesort(int arr[],int p, int r)
{
	if(p<r)
	{
		int q=floor((p+r)/2);
		mergesort(arr,p,q);
		mergesort(arr,q+1,r);
		merge(arr,p,q,r);
	}
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	mergesort(arr,0,n-1);
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
