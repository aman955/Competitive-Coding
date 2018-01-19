#include<iostream>
using namespace std;

int main()
{
	int t,i,k;
	cin>>t;
	string str;
	
	while(t--)
	{
		int c=0;
		int a[26]={0};
		cin>>str;
		for(i=0;i<str.length();i++)
		{
			k=str[i]-97;
			a[k]++;
		}
		for(i=0;i<26;i++)
		{
			if(a[i]>0)
			c++;
		}
		cout<<c;
		
	}
}
