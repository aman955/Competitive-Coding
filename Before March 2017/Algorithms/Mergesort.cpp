#include<iostream>
#include<cmath>
#define INF 100000000
using namespace std;
void Merge(int arr[],int p,int q,int r)
{
	int i,j,k;
	int n1=q-p+1;
	int n2=r-q;
	int l[n1+1];
	int ri[n2+1];
	for(i=0;i<n1;i++)
	l[i]=arr[p+i];
	for(i=0;i<n2;i++)
	ri[i]=arr[q+i+1];
	l[n1]=INF;
	ri[n2]=INF;
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
void Mergesort(int arr[], int p, int r)
{
	if(p<r)
	{
		int q=floor((p+r)/2);
		Mergesort(arr,p,q);
		Mergesort(arr,q+1,r);
		Merge(arr,p,q,r);
	}
}
int main()
{
	int arr[]={3,4,2,1,3,6,8,5};
	Mergesort(arr,0,7);
	for(int i=0;i<8;i++)
	cout<<arr[i];
}
