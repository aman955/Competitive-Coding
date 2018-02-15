#include<bits/stdc++.h>
using namespace std;
 
char str[1000001]={};
int main()
{
	int t,i;
	cin>>t;
	int n,m,k,x,even,odd;
	
	while(t--)
	{
	cin>>n>>m>>x>>k;
	for(i=0;i<k;i++)
	{
	cin>>str[i];
    }
	even=0;odd=0;
	
	for(i=0;i<k;i++)
	{
	if(str[i]=='E')
	even++;
	else 
	odd++;
    }
    if(m==0||x==0)
    {
    	cout<<"no"<<endl;
    	continue;
	}
	
    for(i=1;i<=m;i++)
    {
    	if((i&1)&&odd>=0)
    	{
    		
    		if(x>=odd)
    		{
			n=n-(odd);
			odd=0;
		    }
    		else
    		{
			n=n-x;
			odd=odd-x;
		    }
    		if(n<=0)
    		{
    			cout<<"yes"<<endl;
    			goto aman;
    		}
    		
		}
		else if(even>=0)
		{
			if(x>=even)
    		{
			n=n-(even);
			even=0;
		    }
    		else
    		{
			n=n-x;
			even=even-x;
		    }
    		if(n<=0)
    		{
    			cout<<"yes"<<endl;
    			goto aman;
    		}
		}
	}
	cout<<"no"<<endl;
	aman: ;
	}
	
}
