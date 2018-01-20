#include<iostream>
using namespace std;

int pali(string s);

int pali(string s)
{
	long n=s.length();
	for(long i=0;i<(n+1)/2;i++)
	{
		if(s[i]!=s[n-i-1])
		{
			return 0;
		}
	}
	return 1;
	
}

int main()
{
	int t;
	cin>>t;
	long n,i;
	string s,k;
	while(t--)
	{
		cin>>s;
		n=s.length();
		if(check(s))
		{
			cout<<"-1"<<endl;
			goto aman;
		}
		
		k=str.substr(1);
		if(check(k))
		{
			cout<<"0"<<endl;
			goto aman;
		}
		
		k=str.substr(0,n-2)
				if(check(k))
		{
			cout<<n-1<<endl;
			goto aman;
		}
		
		for(i=1;i<str.length()-1;i++)
		{
		k=str;
		k=str.substr(0,i-1)+str.substr(i+1);
		if(check(k))
		{
			break;
		}
     	}
     	
		
		
	}
	
}
