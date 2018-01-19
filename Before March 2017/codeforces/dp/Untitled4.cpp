#include<iostream>
using namespace std;


int checkBA(string str,int x)
{
	for(int i=x;i<=str.length();i++)
	{
		if(str[i]=='B'&&str[i+1]=='A')
		{
			return 1;
		}
	}
	return 0;
}

int checkAB(string str,int x)
{
	for(int i=x;i<=str.length();i++)
	{
		if(str[i]=='A'&&str[i+1]=='B')
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
  string str;
  cin>>str;
  int n=str.length(),i;
  if(n<=3)
  {
  cout<<"NO";
  return 0;
}
int count1=0,count2=0;
  for(i=0;i<=n-4;i++)
  {
  	if(str[i]=='A'&&str[i+1]=='B')
  	{
  	count1=1;
	  break;	
	  }
  }
  if(checkBA(str,i+2)&&count1)
  		{
  			cout<<"YES";
  			return 0;
  			
		  }
  
  for(i=0;i<=n-4;i++)
  {
  	if(str[i]=='B'&&str[i+1]=='A')
  	{
  		count2=1;
  		break;
	  }
  }
  if(checkAB(str,i+2)&&count2)
  		{
  			cout<<"YES";
  			return 0;
		  }
  cout<<"NO";
}
