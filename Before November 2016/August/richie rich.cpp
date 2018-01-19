#include<iostream>
using namespace std;

int main()
{
	long n,k,i;
	cin>>n>>k;
	char c;
	string str;
	cin>>str;
    if(k>=n)
    {
    	for(i=0;i<n;i++)
    	{cout<<"9";
		}
		return 0;
	}
	
		for(i=0;i<(n)/2;i++)
		{
			if(str[i]!=str[n-i-1])
			{
				if(str[i]>str[n-i-1])
				str[n-i-1]=str[i];
				else
				str[i]=str[n-i-1];
				k--;
			}
		}
    
    
		if(k<0)
	{
		cout<<"-1";
		return 0;
	}
		i=0;
    
    if(k==1&&(n%2)!=0)
      k=0;
    
		while(k>0)
	
		{
				
				if(k==1&&(n&1))
		{
			str[(n/2)]='9';
			cout<<str;
			return 0;
		}
         else  if(k>1)
		 {
		  if(str[i]!='9')
            {str[i]='9';
		str[n-i-1]='9';
             k=k-2;
            }
            i++;
	     }
	     
		}
		cout<<str;
	
}
