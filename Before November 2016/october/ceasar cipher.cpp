#include<iostream>
using namespace std;

int main()
{
	int n,k,i,x;
	cin>>n;
	
	string str;
	cin>>str;
	cin>>k;
	k=k%26;
	for(i=0;i<n;i++)
	{
		if(str[i]>96&&str[i]<123)
		{
		
			if(str[i]>122)
			{
			str[i]=str[i]-26+k;
		}
		else
			str[i]=str[i]+k;
			x=str[i];
			cout<<x;
		}
		
		else if(str[i]>64&&str[i]<91)
		{
			str[i]=str[i]+k;
			if(str[i]>90)
			str[i]=str[i]-26;
		}
	}
	
	for(i=0;i<n;i++)
	{
		cout<<str[i];
	}
	
}
