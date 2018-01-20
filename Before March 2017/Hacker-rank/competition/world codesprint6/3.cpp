#include<iostream>
#include<cmath>
#define INF 2000000
using namespace std;

int main()
{
	long n,k,r,c,i,a,b;
	int w=0,x=0,y=0,z=0;
	cin>>n>>k>>r>>c;
	long arr[9];
	for(i=1;i<9;i++)
	{
		arr[i]=INF;
	}
	arr[1]=0;
	arr[2]=0;
	arr[3]=0;
	arr[8]=0;
	for(i=0;i<k;i++)
	{
		cin>>a>>b;
		if(b==a+c-r)
		{
			if(b<c)
			{
			w=1;
				if(a>arr[1])
				{
					arr[1]=a;
				}
			}
			else
			{
				if(a<arr[5])
				{
					arr[5]=a;
				}
			}
		}
		else if(b==-a+r+c)
		{
			if(b<c)
			{
				
				if(a<arr[7])
				{
					arr[7]=a;
				}
			}
			else
			{
				y=1;
			if(a>arr[3])
				{
					arr[3]=a;
				}	
			}
		}
		else if(b==c)
		{
			if(a<r)
			{x=1;
				if(a>arr[2])
				{
					arr[2]=a;
				}
			}
			else
			{
				if(a<arr[6])
				{
					arr[6]=a;
				}
			}
		}
		else if(a==r)
		{
			if(b>c)
			{
				if(b<arr[4])
				{
					arr[4]=b;
				}
			}
			else
			{
				z=1;
				if(b>arr[8])
				{
					arr[8]=b;
				}
			}
		}
	}
	if(w==0)
	arr[1]=INF;
	if(x==0)
	arr[2]=INF;
	if(y==0)
	arr[3]=INF;
	if(z==0)
	arr[8]=INF;
	
	long long sum=0;

	
	for(i=1;i<9;i++)
	{
		if(arr[i]!=INF&&i!=4&&i!=8)
		{
			sum=sum+abs(r-arr[i])-1;
		}
		else if((i==4||i==8)&&arr[i]!=INF)
		{
			sum+=arr[i]=abs(c-arr[i])-1;
		}
		else if(arr[i]==INF)
		{
			if(i==1)
			{
				sum=sum+min(r,c)-1;
			}
			else if(i==2)
			{
				sum+=(r-1);
			}
			else if(i==3)
			{
				sum+=min(r-1,n-c);
			}
			else if(i==4)
			{
				sum+=(n-c);
			}
			else if(i==5)
			{
				sum+=min(n-r,n-c);
			}
			else if(i==6)
			{
				sum+=(n-r);
			}
			else if(i==7)
			{
				sum+=min(n-r,c-1);
			}
			else
			{
				sum+=(c-1);
			}
		}
	}
	cout<<sum<<endl;
	
	
}
