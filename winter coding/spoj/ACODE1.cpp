#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int k=str[0]-'0';
	
	while(k)
	{
		
		int dp[5001]={};
		dp[0]=1;
		int i;

		if(str[0]=='0')
		{
				cout<<"0"<<endl;
			    	goto aman;
		}
		if(str[1]=='0')
		{
			if(str[0]=='1'||str[0]=='2')
			{
				dp[1]=1;
			}
			else
			{
					cout<<"0"<<endl;
			    	goto aman;
			}
		}
		dp[1]=1;
		
		for(i=1;i<str.length()-1;i++)
		{
			if(str[i+1]=='0')
			{
				if(str[i]=='1'||str[i]=='2')
				{
					dp[i+1]=dp[i];
				}
				else
				{
					cout<<"0"<<endl;
			    	goto aman;
				}
			}
			else if(str[i]=='0')
			{
				dp[i+1]=dp[i];
				i++;
				dp[i+1]=dp[i];
				
			}
			else
			{
				if((str[i-1]-'0')*10+(str[i]-'0')<=26)
			{
				dp[i+1]=dp[i]+dp[i-1];
			}
			else
			{
				dp[i+1]=dp[i];
			}
			
			}
			
		}
		if(str[str.length()-1]!='0')
		{
		if(str[str.length()-2]=='1'||str[str.length()-2]=='2')
		{
			dp[str.length()]=dp[str.length()-1]+dp[str.length()-2];
		}
		else
		{
		
			dp[str.length()]=dp[str.length()-1];
			
		}
	}
		else
		{
		
			dp[str.length()]=dp[str.length()-1];
			
		}
			cout<<dp[str.length()]<<endl;
		aman: ;
   cin>>str;
   k=str[0]-'0';
	}
}
