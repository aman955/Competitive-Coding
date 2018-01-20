#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str1,str2;
	cin>>str1>>str2;
	int n1=str1.length(),n2=str2.length();
	int a[26]={},b[26]={};
	for(i=0;i<n1;i++)
	{
		if(str1[i]<97)
		{
			a[str1[i]-'A']++;
		}
	}
	for(i=0;i<n2;i++)
	{
		if(str2[i]<97)
		b[str2[i]-'A']++;
	}
	for(i=0;i<26;i++)
	{
		if(a[i]!=b[i])
		{
			cout<<"NO"<<endl;
			goto aman;
		}
	}
	
}
