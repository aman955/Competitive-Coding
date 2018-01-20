#include<iostream>
#define max(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; })
using namespace std;

int main()
{
	int n,t;
	cin>>t;
	while(t--)
	{
		int h1=0,h2=0,v1=0,v2=0,sum=0,i,j,d,e,f,g,h,v;
		cin>>n;
		int a[2*n][2*n];
		for(i=0;i<2*n;i++)
		{
			for(j=0;j<2*n;j++)
			cin>>a[i][j];
		}
		for(i=0;i<n;i++)
		{
			d=max(a[i][i],a[i][2*n-1-i]);
			
		   e=max(a[2*n-1-i][i],a[2*n-1-i][2*n-1-i]);
		   
		   f=max(d,e);
		    h1=0;
			h2=0;
			v1=0;
			v2=0;
			
		   
		   for(j=1;j<2*n-i-1;j++)
		   {
		   	if(a[i][j]>h1)
		   	h1=a[i][j];
		   	if(a[2*n-i-1][j]>h2)
		   	h2=a[2*n-i-1][j];
		   	if(a[j][i]>v1)
		   	v1=a[j][i];
		   	if(a[j][2*n-i-1]>v2)
		   	v2=a[j][2*n-i-1];
		   }
		   h=max(h1,h2);
		   v=max(v1,v2);
		   sum=sum+f+h+v;
		   
		   
		}
		cout<<sum-f-v<<endl;
	}
}

