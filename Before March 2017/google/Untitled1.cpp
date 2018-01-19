#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;





int main()
{
		 ofstream myfile;
	 ifstream infile;
	long long t,i,j=1;
	

  myfile.open ("ot4.txt");
  
  infile.open("A-small-attempt2 ");
  infile>>t;
  
	while(t--)
	{
		long long r,c;
		infile>>r>>c;
		long long temp=min(r,c);
		long long ans=0;
		long long p=r-1,k=c-1,n=temp-1;
	    long long temp1=((n*(n+1))/2)%mod;
	    ans=((k%mod)*(p%mod))%mod;
	    ans=(ans+(temp1)%mod)%mod;
	    ans=((temp1*temp1)%mod+ans%mod);
	    
	    if((n*(n+1))%6==0)
	    {
	    temp1=((n*(n+1))/6)%mod;
		temp1=(temp1*((2*(n+1))%mod))%mod;
		temp1=(temp1*(k+p)%mod)%mod;
		ans=(ans-temp1+mod)%mod;	
		}
		else if((n*(2*n+1))%6==0)
	    {
	    temp1=((n*(2*n+1))/6)%mod;
		temp1=(temp1*(((n+1))%mod))%mod;
		temp1=(temp1*(k+p)%mod)%mod;
		ans=(ans-temp1+mod)%mod;	
		}
		else
		{
	    temp1=(((2*n+1)*(n+1))/6)%mod;
		temp1=(temp1*(n%mod))%mod;
		temp1=(temp1*(k+p)%mod)%mod;
		ans=(ans-temp1+mod)%mod;	
		}
		
		
		ans=(ans+(r%mod*c%mod*n%mod))%mod;
		ans=(mod+ans-(((n*(n+1))/2)%mod*(r+c)%mod)%mod)%mod;
		
		if((n*(n+1))%6==0)
	    {
	    temp1=((n*(n+1))/6)%mod;
		temp1=(temp1*((2*(n+1))%mod))%mod;
		ans=(mod+ans-temp1)%mod;	
		}
		else if((n*(2*n+1))%6==0)
	    {
	    temp1=((n*(2*n+1))/6)%mod;
		temp1=(temp1*(((n+1))%mod))%mod;
		ans=(mod+ans-temp1)%mod;	
		}
		else
		{
	    temp1=(((2*n+1)*(n+1))/6)%mod;
		temp1=(temp1*(n%mod))%mod;
		ans=(mod+ans-temp1)%mod;	
		}
				
	    
		myfile<<"Case #"<<j<<": "<<ans%mod<<endl;
		j++;
	    }

  
    myfile.close();	
      infile.close();
	}
	


