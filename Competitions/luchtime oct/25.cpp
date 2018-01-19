#include<iostream>
using namespace std;
	int arr[100005]={};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		int n=str.length();
		long sum1=0;
		for(int i=1;i<=n;i++)
		{
		arr[n+1-i]=str[i-1]-'0';
		sum1=sum1+arr[n+1-i];
	}
		int temp=n,count=n;
		
			if(arr[1]&1)
		{
			
			if((sum1-arr[1])%3==0&& !(arr[2]&1))
			{
					for(int j=count;j>1;j--)
				{
					cout<<arr[j];
				}
				cout<<endl;
			}
			else 
			{
				cout<<"-1"<<endl;
			}
			
			
			continue;
		}
	
	
		
		int temp1=sum1%3,temp2=-1,i,j;
		arr[0]=0;
		int last=10000;
		
		for(i=count;i>=1;i--)
		{
			if((arr[i]%3)==temp1)
			{
				
				if(i==1)
				{
					
					
				if((sum1-arr[1])%3==0&& !(arr[2]&1))
			{
					for(int j=count;j>1;j--)
				{
					cout<<arr[j];
				}
				cout<<endl;
				goto aman;
			}
					
					
				}
				else
				{
				if(arr[i]<arr[i-1])
				{
				
				for(j=count;j>0;j--)
				{
					if(j!=i)
					cout<<arr[j];
				}
				cout<<endl;
				goto aman;
			    }
			    temp2=i;
			}
			   
			}
		}

		if(temp2!=-1)
		{
	
			for(j=count;j>0;j--)
				{
					if(j!=temp2)
					cout<<arr[j];
				
					
				}
					cout<<endl;
				goto aman;
		}
		else
		{
			cout<<"-1"<<endl;
		}
		aman: ;
	}
}
