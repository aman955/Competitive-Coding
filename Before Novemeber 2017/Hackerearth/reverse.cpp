#include<bits/stdc++.h>
#include<vector>
using namespace std;
 
long long reverse(long long int a)
{
 
    long long int temp,b=0,c;
    while(a%10==0)
    {
        a=a/10;
    }
    temp=a;
    
    long long int base=10;
    while(temp!=0)
    {
        c=temp%10;
        b=base*b+c;
        temp=temp/10;
    }
    
    return b;
}
 
int main()
{
	long long int t,i;
	cin>>t;
	while(t--)
	{
	    long long int a,b,ans;
	    cin>>a>>b;
	    a=reverse(a);
	    b=reverse(b);
	  
	    ans=a+b;
	    ans=reverse(ans);
	    cout<<ans<<endl;
	}
	
}
