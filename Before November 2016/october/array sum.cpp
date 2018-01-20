#include<iostream>
using namespace std;
void arr_sum(int arr[], int brr[]);
void square(int crr[]);

void arr_sum(int arr[],int brr[])
{
	int k=0,i,a;
	for(i=0;i<100;i++)
	{
		
		if(arr[i]+brr[i]+k<10)
		a=arr[i]+brr[i]+k;
		else
		a=(arr[i]+brr[i]+k)%10;
		k=(arr[i]+brr[i]+k)/10;
		arr[i]=a;	
	}
	
}

void square(int crr[])
{
	int drr[100];
	for(i=0;i<100;i++)
	{
		drr[i]=crr[i];
	}
	
	
	
	
	
}
int main()
{
	int t1,t2;
	cin>>t1>>t2;
	int n,i;
	cin>>n;
	int a[100]={0},b[100]={0},c[100]={0};
	int *cd;
	a[0]=9;
	a[1]=9;
	a[2]=3;
	a[3]=2;
	b[0]=4;
	b[1]=8;
	b[2]=8;
	b[3]=3;
	arr_sum(a,b);
		for(i=99;i>=0;i--)
	cout<<a[i];
	
}
