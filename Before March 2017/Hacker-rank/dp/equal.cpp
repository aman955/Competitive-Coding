#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long minimum(int x)
{
	int sum=0,temp=0;
	if(x>=5)
	{
		temp=x/5;
		x=x%5;
		sum+=temp;
	}
	if(x>=2)
	{
		temp=x/2;
		x=x%2;
		sum+=temp;
	}
	if(x==1)
	sum+=1;
	return sum;
}

int main()
{

	int n,t;
	cin>>t;
	while(t--)
	{
	cin>>n;
	int arr[n],i,j;
	for(i=0;i<n;i++)
	cin>>arr[i];
	int min=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]<min)
		min=arr[i];
	}
	int sum[5]={0},temp;
	for(i=0;i<5;i++)
	{
		for(j=0;j<n;j++)
		{
		temp=abs(arr[j]-min+i);
		sum[i]=sum[i]+minimum(temp);
	    }
	}
	min=sum[0];
	for(j=1;j<5;j++)
	{
		if(sum[j]<min)
		min=sum[j];
	}
	cout<<min<<endl;
	
}
	

}

