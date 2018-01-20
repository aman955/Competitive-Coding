#include<iostream>
#define max(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; })
using namespace std;

int main()
{
	int n,t,sum1,sum2,sum3,sum4,temp,row=0,column=0,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[2*n][2*n];
			for(i=0;i<2*n;i++)
		{
			for(j=0;j<2*n;j++)
			cin>>a[i][j];
		}
		while(1)
		{
				row=0;
			column=0;
		for(i=0;i<2*n;i++)
		{
		
			sum1=0;
			sum2=0;
		for(j=0;j<n;j++)
		{
			sum1=sum1+a[i][j];
		}
		for(j=n;j<2*n;j++)
		{
			sum2=sum2+a[i][j];
		}
		if(sum1<sum2)
		{
				for(j=0;j<n;j++)
		{
		      temp=a[i][j];
		      a[i][j]=a[i][2*n-1-j];
		      a[i][2*n-1-j]=temp;
		}
		column++;
		
		}
				sum3=0;
		sum4=0;
			for(j=0;j<n;j++)
		{
			sum3=sum3+a[j][i];
		}
		for(j=n;j<2*n;j++)
		{
			sum4=sum4+a[j][i];
		}
		
			if(sum3<sum4)
		{
				for(j=0;j<n;j++)
		{
		      temp=a[j][i];
		      a[j][i]=a[2*n-1-j][i];
		      a[2*n-1-j][i]=temp;
		}
		row++;
	}
	
		}
		if(row==0&&column==0)
		break;
	}
	for(i=0;i<2*n;i++)
	{
		for(j=0;j<2*n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
}
	
