#include<iostream>
using namespace std;

int main()
{
	long n;
	cin>>n;
	long d[n+2],decrease=0,temp[3],j=1,i;
	d[0]=-1;
	for(i=1;i<=n;i++)
    {
	cin>>d[i];
	if(d[i]<d[i-1])
	   decrease++;
    }
   
    if(decrease==0)
    {
    	cout<<"yes";
    	return 0;
	}
    else if(decrease==1)
    {
    	if(d[1]<d[0])
    	{
    		cout<<"swap 1 2";
		}
		else if(d[n]<d[n-1])
		{
			cout<<"swap "<<(n-1)<<" "<<n;
		}
		return 0;
	}
	 else if(decrease==2)
	{
	   for(i=1;i<=n;i++)
	   {
	   	if(d[i]<d[i-1])
	   	{
	   		temp[j]=d[i];
	   		j++;
		}
		}
		cout<<"swap "<<temp[1]<<" "<<temp[2];
		return 0;	
	}
}
