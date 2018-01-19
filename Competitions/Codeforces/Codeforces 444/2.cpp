#include<iostream>
using namespace std;

int num[1000]={};

int main()
{
	int n,i,j,k;
	cin>>n;
	int arr[7]={};
	int brr[7]={};
	int crr[7]={};
	if(n==1)
	{
		for(i=1;i<=6;i++)
		cin>>arr[i];
		
		
		
						for(i=1;i<=6;i++)
	{
	num[arr[i]]=1;
    }
		
	}
	if(n==2)
	{
		for(i=1;i<=6;i++)
		cin>>arr[i];
		for(i=1;i<=6;i++)
		cin>>brr[i];
		
		
		
		
		
				for(i=1;i<=6;i++)
	{
	num[arr[i]]=1;
	num[brr[i]]=1;
    }
    
    for(i=1;i<=6;i++)
    {
    	for(j=1;j<=6;j++)
    	{
    		num[arr[i]*10+brr[j]]=1;
    		num[brr[i]*10+arr[j]]=1;
		}
	}
		
		
		
	}
	if(n==3)
	{
		for(i=1;i<=6;i++)
		cin>>arr[i];
		for(i=1;i<=6;i++)
		cin>>brr[i];
		for(i=1;i<=6;i++)
		cin>>crr[i];
		
			for(i=1;i<=6;i++)
	{
	num[arr[i]]=1;
	num[brr[i]]=1;
	num[crr[i]]=1;
    }
    
    for(i=1;i<=6;i++)
    {
    	for(j=1;j<=6;j++)
    	{
    		num[arr[i]*10+brr[j]]=1;
    		num[brr[i]*10+arr[j]]=1;
    		num[arr[i]*10+crr[j]]=1;
    		num[crr[i]*10+arr[j]]=1;
    		num[crr[i]*10+brr[j]]=1;
    		num[brr[i]*10+crr[j]]=1;
		}
	}
	for(i=1;i<=6;i++)
	{
		for(j=1;j<=6;j++)
		{
			for(k=1;k<=6;k++)
			{
				num[arr[i]*100+brr[j]*10+crr[k]]=1;
				num[brr[i]*100+arr[j]*10+crr[k]]=1;
				num[arr[i]*100+crr[j]*10+brr[k]]=1;
				num[brr[i]*100+crr[j]*10+arr[k]]=1;
				num[crr[i]*100+brr[j]*10+arr[k]]=1;
				num[crr[i]*100+arr[j]*10+brr[k]]=1;
				
			}
		}
	}
		
		
		
		
		
		
		
		
	}

	int count=0;
	for(i=1;i<=999;i++)
	{
		if(num[i])
		{
			count++;
		}
		else
		break;
	}

	cout<<count<<endl;
	
}
