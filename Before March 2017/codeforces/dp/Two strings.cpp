#include<iostream>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int i,n;
	int count1=0,count2=0,count3=0,count4=0;
	n=str.length();
     for(i=1;i<str.length()-1;i++)
     {
     	if(str[i]=='B'&&str[i-1]=='A'&&str[i+1]=='A')
     	{
     		count1=1;
		}
		if(str[i]=='A'&&str[i-1]=='B'&&str[i+1]=='B')
     	{
     		count2=1;
		}
	 }
	 
	 if(str[0]=='A'&&str[1]=='B'&&str[2]!='A')
	 {
	 	count3=1;
	 }
	 if(str[0]=='B'&&str[1]=='A'&&str[2]!='B')
	 {
	 	count4=1;
	 }
	 if(str[n-1]!='A'&&str[n-2]=='B'&&str[n-3]=='A')
	 {
	 	count4=1;
	 }
	 
	 if(str[n-1]!='B'&&str[n-2]=='A'&&str[n-3]=='B')
	 {
	 	count3=1;
	 }
	 
	 
	 for(i=1;i<str.length()-2;i++)
	 {
	 	if(str[i]=='A'&&str[i+1]=='B'&&str[i-1]!='B'&&str[i+2]!='A')
	 	{
	 		count3=1;
		 }
		 if(str[i]=='B'&&str[i+1]=='A'&&str[i-1]!='A'&&str[i+2]!='B')
	 	{
	 		count4=1;
		 }
	 }
	 if((count1==1&&count2==1)||(count2==1&&count4==1)||(count3==1&&count4==1)||(count3==1&&count2==1)||(count3==1&&count1==1)||(count1==1&&count4==1))
	 cout<<"YES";
	 else
	 cout<<"NO";
}
