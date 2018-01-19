#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t,i,n;
	
	string str;
		cin>>n;
		cin>>str;
		int c=0;
		if(str[n-1]=='1')
		{str[n]='1';
		str[n+1]='1';
		str[n+2]='1';
		str[n+3]='1';
		str[n+4]='1';
		str[n+5]='1';
		str[n+6]='1';
		}
        else
     {
	    str[n]='0';
		str[n+1]='0';
		str[n+2]='0';
		str[n+3]='0';
		str[n+4]='0';
		str[n+5]='0';
		str[n+6]='0';
	}
		for(i=0;i<n;i++)
		{
			if(str[i]=='0'&&str[i+1]=='1'&&str[i+2]=='0'&&str[i+3]=='1'&&str[i+4]=='0'&&str[i+5]=='1'&&str[i+6]=='0')
			{
				c=c+2;
				i=i+5;
			}
		  else	if(str[i]=='0'&&str[i+1]=='1'&&str[i+2]=='0'&&str[i+3]=='1'&&str[i+4]=='0'&&str[])
			{
				c=c+2;
				i=i+3;
			}
			else if(str[i]=='0'&&str[i+1]=='1'&&str[i+2]=='0')
			{
				c=c+1;
				i=i+1;
			}
		}
		cout<<c<<endl;
}
