#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	long long n,b,k;
	while(t--)
	{
		cin>>n[t]>>k[t]>>b[t];
		long count = 1,a=1;
		long long sum;
		sum = ((b[t]-1)*b[t])/2;
		int diff = n-sum;
		
		for(;diff>k;)
		{
		sum = sum + (b[t]-1)*a;
		diff = n[t] - sum;
		count++;
		}
		
		if(diff>=count && diff<=count+b-2)
		{
		sum = sum + (b[t]-1)*a;
		diff = n[t] - sum;
		count++;
		}
		
		if(count+b[t]-2>k||diff<=0)
		{
			cout<<"-1"<<endl;
			goto aman;
		}
		for(int i=t;i)
		for(int i=0;i<b[t]-1;i++,count++)
		cout<<count<<" ";
		cout<<diff<<endl;
		aman: ;
	}
	
}
