#include<bits/stdc++.h>
using namespace std;

int arr[10001]={};
int sum[10000001]={};

int main()
{
	int i,j,temp,c;
	for(i=1;i<=10000000;i++)
	{
		temp=i;
		while(temp!=0)
		{
			c=temp%10;
			sum[i]+=c;
			temp=temp/10;
		}
	}
	j=1;
	for(i=1;i<=10000000;i++)
	{
		if(j>10000)
		break;
		if(sum[i]<=10)
		{
			arr[j]=i*10+(10-sum[i]);
			j++;
		}
	}
	int n;
	cin>>n;
	cout<<arr[n]<<endl;
	
}
