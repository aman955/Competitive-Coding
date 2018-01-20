#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	long n;
	while(t--)
	{
	
		long long sum=0,sum1=0,sum2;
		long a[n],i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum=sum+a[i];
		}
		sum2=sum-a[0];
			cin>>n;
        if(n==1)
            {
            cout<<"YES"<<endl;
        }
		else if(n==2)
		{
			cout<<"NO"<<endl;
		}
		else
		{
		for(i=1;i<n-1;i++)
		{
			sum1=a[i-1]+sum1;
			sum2=sum2-a[i];
			if(sum1==sum2)
			{
				cout<<"YES"<<endl;
				goto aman;
			}
		}
		cout<<"NO"<<endl;
	}
		aman:  ;
		
	}
}
