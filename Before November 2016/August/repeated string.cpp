#include<iostream>
using namespace std;

int main()
{
	string str;
	cin>>str;
	long long b,ans,m,rem;
	cin>>b;
	int i,c=0,len,d=0;
	len=str.length();
	for(i=0;i<len;i++)
	{
		if(str[i]=='a')
		c++;
	}
	m=b/(len);
	rem=b%len;
	for(i=0;i<rem;i++)
	{
		if(str[i]=='a')
		d++;
	}
	ans=m*c+d;
	cout<<ans;
	
}
