#include<iostream>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int i,n=str.length();
	
	if(n==1)
	{
		if(str[0]!='?')
		{
			cout<<str[0];
			return 0;
		}
		else
		cout<<'a';
		return 0;
	}
	
	
	if(str[0]=='?')
	{
		if(str[1]=='a')
		str[0]='b';
		else
		str[0]='a';
	}
	
	for(i=1;i<n-1;i++)
	{
		if(str[i]=='?')
		{
			if(str[i-1]=='a')
			str[i]='b';
			else if(str[i-1]=='b'&&str[i+1]=='a')
			str[i]='b';
			else if(str[i-1]=='b'&&str[i+1]=='b')
			str[i]='a';
			else if(str[i-1]=='b'&&str[i+1]=='?')
		    str[i]='a';
		}
	}
	if(str[n-1]=='?')
	{
		if(str[n-2]=='a')
		str[n-1]='b';
		else
		str[n-1]='a';
	}
	
	for(i=0;i<n;i++)cout<<str[i];
}
