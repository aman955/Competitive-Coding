#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	cin>>str;
	long long len,len1,len2;
	cin>>len;
	int count=0,count2=0,i,strin=str.length();
	len1=len/strin;
	len2=len%strin;
	
	for(i=0;i<strin;i++)
	{
		if(str[i]=='a')
		{
			count++;
		}
	}
	
	
	for(i=0;i<len2;i++)
	{
		if(str[i]=='a')
		{
			count2++;
		}
}
	cout<<(count*len1)+count2;
	
	
}
