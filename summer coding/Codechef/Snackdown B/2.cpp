#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		int n=str.length(),i;
		int sn=0,mn=0;
		
		for(i=1;i<n-1;i++)
		{
		if(str[i]=='s')
		{
			sn++;
		}
		if(str[i]=='m')
		mn++;
		if((str[i]=='m'&&str[i-1]=='s')||(str[i]=='m'&&str[i+1]=='s'))
		{
			sn--;
		}
		if(str[i]=='s'&&str[i-1]=='m'&&str[i+1]=='m')
		sn++;
		}
		if(str[0]=='s')
		sn++;
		if(str[n-1]=='s')
		sn++;
		if(str[0]=='m')
		mn++;
		if(str[n-1]=='m')
		mn++;
		
		if(n>=2)
		{
		if(str[0]=='m'&&str[1]=='s')
		{
			sn--;
		}
		if(str[n-1]=='m'&&str[n-2]=='s')
		{
			sn--;
		}
	    }
	   
		if(sn>mn)
		{
			cout<<"snakes";
		}
		else if(mn>sn)
		{
			cout<<"mongooses";
		}
		else
		cout<<"tie";
		if(t!=0)
		cout<<endl;
	}
	
}
