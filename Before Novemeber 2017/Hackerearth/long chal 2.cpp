#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	string str;
	while(t--)
	{
		cin>>str;
		int i,arr[10]={};
		bool brr[27]={};
		int n=str.length();
		for(i=0;i<n;i++)
		{
			arr[str[i]-'0']++;
		}
		
		if(arr[6])
		{
		for(i=5;i<10;i++)
		{
			
				if(arr[i]&&i!=6)
				{
					brr[i-4]=true;
				}
				else if(i==6&&arr[6]>=2)
				{
					brr[2]=true;
				}
		}
	    }
	    if(arr[7])
	    {
	    	for(i=0;i<10;i++)
	    	{
	    		
				 if(arr[i]&&i!=7)
				{
					brr[i+6]=true;
				}
				else if(i==7&&arr[7]>=2)
				{
					brr[13]=true;
				}
			}
		}
		if(arr[8])
		{
				for(i=0;i<10;i++)
	    	{
	    		
				if(arr[i]&&i!=8)
				{
					brr[i+16]=true;
				}
				else 	if(i==8&&arr[8]>=2)
				{
					brr[24]=true;
				}
			}
		}
		if(arr[9])
		{
			if(arr[0])
			{
				brr[26]=true;
			}
		}
		char c;
		for(i=1;i<=26;i++)
		{
			if(brr[i])
			{
				c=i+64;
				cout<<c;
			}
		}
		cout<<endl;
	}
}
