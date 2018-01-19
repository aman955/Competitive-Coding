#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	string str1,str2;
	cin>>str1>>str2;
	 int a[26]={0},b[26]={0},c=0,sum=0,i;
	 
	 for(i=0;i<str1.length();i++)
	 {
	 	c=str1[i]-97;
	 	a[c]++;
	 }
	 for(i=0;i<str2.length();i++)
	 {
	 	c=str2[i]-97;
	 	b[c]++;
	 }
	 
	 for(i=0;i<26;i++)
	 {
	 	if(a[i]!=b[i])
	 	{
	 		c=abs(a[i]-b[i]);
	 		sum=sum+c;
		 }
	 }
	 cout<<sum;
}
