#include<iostream>
#include<climits>
using namespace std;
int arr[1000005]={};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,r,x,i,p=0;
		cin>>n>>r;
		int max=INT_MAX,min=-1;
		for(i=0;i<n;i++)
		cin>>arr[i];
		for(i=0;i<n;i++)
		{
			if(arr[i]>r)
			{
				if(arr[i]>max)
				{
					cout<<"NO"<<endl;
					p=1;
				}
				
				max=arr[i];
			}
	        else if(arr[i]<r)
			{
				if(arr[i]<min)
				{
					cout<<"NO"<<endl;
					p=1;
				}
				min=arr[i];
			}
			else 
			{
				cout<<"YES"<<endl;
			}
			if(p==1)
			break;
		}
		if(p==1)
		{
			continue;
		}
	}
}
