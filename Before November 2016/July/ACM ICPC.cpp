#include<iostream>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	string a[n],comp1,comp2;
	int max=0,c=0,d=0,l=1,i,j,k;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<n-1;i++)
	{
		for(k=i+1;k<n;k++)
		{
			
		comp1=a[i];
		comp2=a[k];
	
		if(c>max)
		{
		max=c;
		d=1;
	    }
	    c=0;
		for(j=0;j<m;j++)
		{
			if((comp1[j]-48)||(comp2[j]-48))
			{
				c++;
			}
		}
		if(l)
		{
			max=c;
			l=0;
		}
			if(c==max)
		{
			d++;
		}
	}
		
		
	}
	cout<<max<<endl<<d;
	
	
}
