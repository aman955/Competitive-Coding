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
		for(i=0;i<n;i++)
		{
			if(str[i]=='s')
			sn++;
			else
			mn++;
		}
		for(i=0;i<n-1;i++)
		{
			if((str[i]=='s'&&str[i+1]=='m')||(str[i]=='m'&&str[i+1]=='s'))
			{
				sn--;
				i++;
			}
		}
		
			if(sn>mn)
		{
			cout<<"snakes"<<endl;
		}
		else if(mn>sn)
		{
			cout<<"mongooses"<<endl;
		}
		else
		cout<<"tie"<<endl;
	  }
}
