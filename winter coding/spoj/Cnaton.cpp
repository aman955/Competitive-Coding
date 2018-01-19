#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,sum,val;
		cin>>n;
		long long gn=0,i=0;
	    while(i<n)
	    {
	    	gn++;
	    	i=i+gn;
		}
		cout<<"TERM "<<n<<" IS ";
		if(gn&1)
		{
			k=(gn*(gn-1))/2+1;
			sum=gn+1;
			val=-n+k+gn;
			cout<<(val)<<"/"<<sum-val<<endl;;
		}
		else
		{
			k=(gn*(gn-1))/2+1;
			sum=gn+1;
			val=-n+k+gn;
			cout<<(sum-val)<<"/"<<val<<endl;;
		}
	}
}
