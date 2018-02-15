#include<bits/stdc++.h>
using namespace std;

long long  func(int n)
{
    long long sum=0;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
         
            if (n/i == i)
                {
                	if(i&1)
                	{
					sum+=i;
				
				}
                }
            else 
               
               {
               	if(i&1)
               		{
					sum+=i;
					
				}
               	if((n/i)&1)
               		{
					sum+=(n/i);
				
				}
			   }
        }
    }
    return sum;
}
 

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long n;
		cin>>n;
		long long ans=func(n);
		cout<<ans<<endl;
	}
}

