#include<iostream>
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
		dp[1]=1;
		if(str[0]=='0')
		{
				cout<<"0"<<endl;
			    	goto aman;
		}
		for(i=1;i<str.length();i++)
		{
			if(str[i]=='0')
			{
				if(str[i-1]=='1'||str[i-1]=='2')
				{
				dp[i+1]=dp[i];
			    }
			    else
			    {
			    	cout<<"0"<<endl;
			    	goto aman;
				}
			}
			else if(str[i-1]=='0')
			{
				dp[i+1]=dp[i-1];
			}
			else if(i!=str.length()&&str[i+1]=='0')
			{
				dp[i+1]=dp[i-1];
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
		cout<<dp[str.length()]<<endl;
		aman: ;
   cin>>str;
   k=str[0]-'0';
	}
}
