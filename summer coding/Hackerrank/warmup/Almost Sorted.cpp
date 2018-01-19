#include<iostream>
using namespace std;

int main()
{
	int i,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	int a=0,b=0,d=0,t=1,g=1,q,w=n-1;
	for(i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			if(t)
			{
				t=0;
				a=i;
			}
			else if(g)
			{
				g=0;
				b=i;
			}
			d++;
		}
	}

	if(d==0)
	{
		cout<<"yes"<<endl;
		return 0;
	}
	else if(d==1)
	{
		int temp=arr[a];
		arr[a]=arr[a+1];
		arr[a+1]=temp;
		for(i=0;i<n-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				goto aman;
			}
		}
		cout<<"yes"<<endl<<"swap "<<a+1<<" "<<a+2;
		return 0;
	}
	else if(d==2)
	{
		int temp=arr[a];
		arr[a]=arr[b+1];
		arr[b+1]=temp;
			for(i=0;i<n-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				goto aman;
			}
		}
		cout<<"yes"<<endl<<"swap "<<a+1<<" "<<b+1+1;
		return 0;
	}
	
	aman:
		int p=1;
		if(d==2)
		{
		int temp=arr[a];
		arr[a]=arr[b+1];
		arr[b+1]=temp;
	   }
	   if(d==1)
	   {
	   	int temp=arr[a];
		arr[a]=arr[a+1];
		arr[a+1]=temp;
	   }
	   for(i=0;i<n;i++)
	   cout<<arr[i]<<endl;
	  
	
		for(i=0;i<n-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				if(p==0)
				{
					cout<<"no"<<endl;
					return 0;
				}
				q=i;
				for(;i<n-1;i++)
				{
					if(arr[i+1]>arr[i])
					{
						w=i;
						break;
					}
				}
				p--;
			}
		}
	
		int brr[w-q+1];

		for(i=0;i<=w-q;i++)
		{
			brr[w-q-i]=arr[i+q];
		}

		
		
		
		for(i=0;i<=w-q;i++)
		{
			arr[i+q]=brr[i];
		}
				
				for(i=0;i<n-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				cout<<"no"<<endl;
				return 0;
			}
		}
		
		cout<<"yes"<<endl<<"reverse "<<q+1<<" "<<w+1;
		

}
