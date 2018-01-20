#include<bits/stdc++.h>
#include<set>
using namespace std;



bool prime[35005];
 
void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    prime[1]=0;
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 

}
 //

int main()
{
    long long int n,i;
    
    SieveOfEratosthenes(35000);
  unsigned long long int k;
    set<long long int> s;
    for(i=1;i<=35000;i++)
    {
    	if(prime[i])
		{
			k=i*i;
			k=k*i;
			k=k*i;
			s.insert(k);
		}
	}

	
		
	int t;
	cin>>t;

	while(t--)
	{
		cin>>n;
		if(n==1)
		{
			cout<<"No"<<endl;
			goto aman;
		}
		if(s.find(n)!=s.end())
		{
			cout<<"Yes"<<endl;
			goto aman;
		}
		cout<<"No"<<endl;
		aman:  ;
	}
	
}
