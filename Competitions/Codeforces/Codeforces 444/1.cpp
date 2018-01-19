#include<iostream>
using namespace std;

int main()
{
	int i,count=0;
	string str;
	cin>>str;
	if(str.length()<=6)
	{
		cout<<"no"<<endl;
	}
	else
	{
		for(i=0;i<str.length();i++)
		{
			if(str[i]=='1')
			{
				break;
			}
		}
		for(;i<str.length();i++)
		{
			if(str[i]=='0')
			{
				count++;
			}
		}
	
		if(count>=6)
		{
			cout<<"yes"<<endl;
		}
		else
		{
			cout<<"no"<<endl;
		}
	}
}
