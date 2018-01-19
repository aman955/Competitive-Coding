#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int num;
		int arr[11]={};
		int n;
		cin>>n;
		int temp=n,count=1;
		
			if(n&1)
		{
			temp=n/10;
			if(temp%6!=0)
			{
				cout<<"-1"<<endl;
			}
			else 
			{
				cout<<temp<<endl;
			}
			continue;
		}
		int sum=0,c;
		while(temp!=0)
		{
			c=temp%10;
			arr[count]=c;
			sum=sum+c;
			count++;
			temp=temp/10;
		}
		count--;
		
		int temp1=sum%3,temp2=-1,i,j;
		arr[0]=10;
		int last=10000;
		cout<<temp1<<endl;
		for(i=count;i>=1;i--)
		{
			if((arr[i]%3)==temp1)
			{
				cout<<"YES"<<i<<endl;
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
			    temp2=arr[1]%3;
			    last=i;
			}
		}
		cout<<last<<endl;
		if(temp2!=-1)
		{
			if(last==1)
			{
				n=n/10;
				if(n%6==0)
				{
					cout<<n<<endl;
				}
				else
				{
					cout<<"-1"<<endl;
				}
				goto aman ;
				
			}
			for(j=count;j>0;j--)
				{
					if(j!=temp2)cout<<arr[j];
				
					
				}
					cout<<endl;
				goto aman;
		}
		else
		{
			cout<<"-1456"<<endl;
		}
		aman: ;
	}
}
