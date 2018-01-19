#include<iostream>
using namespace std;

int main()
{
	long t;
	cin>>t;
	while(t--)
	{
		long long n,k,i,l=0,count=0,j;
		cin>>n>>k;
		if(n>=k)
		{
		for(i=1;i<=(k)/2;i++)
		{
			count=count+(k-i)-l;
			l++;
		}
		cout<<count<<endl;
	     }
	     else if(2*n<=k)
	     {
	     	count=(n-1)*(n-1);
	     	cout<<count<<endl;
		 }
		 else
		 {
		  for(i=1;i<=n;i++)
		  {
		  	for(j=i;j<=n;j++)
		  	{
		  		if(i+j<=k)
		  		count++;
			  }
			  
		  }
		  cout<<count<<endl;
		  
		 }
		
	}
}

