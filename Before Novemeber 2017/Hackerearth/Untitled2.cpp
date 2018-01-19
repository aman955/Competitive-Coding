#include<iostream>
#include<vector>
using namespace std;


int main()
{
	long long i,fib[110]={};
	fib[0]=1;
	fib[1]=1;
	for(i=2;i<=109;i++)
	{
		fib[i]=fib[i-1]+fib[i-2];
	}

	string str;
	cin>>str;
	while(1)
	{
		
		vector<long long> vec;
		if(str[0]=='0')
		{
			goto aman;
		}
		int n=str.length(),counti=0;
		if(str[0]>'2')
		{
			vec.push_back(1);
		}
		else 
		{
			counti=1;
		}
		int flag=1;
		for(i=1;i<n;i++)
		{
			if(str[i]=='0')
			{
				if(str[i-1]=='1'||str[i-1]=='2')
				{
				}
				else
				{
				flag=0;
				}
			}
		}
		if(flag==0)
		{
			cout<<0<<endl;
			cin>>str;
			continue;
		}
		for(i=1;i<n;i++)
		{
			if((str[i]>'2'&&str[i]<'7')||str[i]=='0')
			{
			
				if(str[i-1]=='1')
				{
			
					vec.push_back(fib[counti+1]);
				}
				else if(str[i-1]=='2')
				{
				
					vec.push_back(fib[counti]+1);
				}
				
				counti=0;
			}
			else if(str[i]=='1'||str[i]=='2')
			counti++;
	
		}
		
		if(str[n-1]=='2'||str[n-1]=='1')
		vec.push_back(fib[counti]);
		long long ans=1;
		for(i=0;i<vec.size();i++)
		{
			
			ans=ans*vec[i];
		}
		cout<<ans<<endl;
	
		cin>>str;
	}
	aman: ;
}
