#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		string atr,btr;
		cin>>n;
		cin>>atr;
		cin>>btr;
		int i,count=0,counti=0;
		for(i=0;i<n;i++)
		{
			if(atr[i]=='*'&&btr[i]=='*')
			{
				count=1;
				break;
			}
		}
		int up=0;
		for(i=0;i<n;i++)
		{
			if(atr[i]=='*'||btr[i]=='*')
			{
				if(atr[i]=='*' && btr[i]=='*')
				{
					up=0;
				}
				else if(atr[i]=='*')
				{
					if(up==2 && count==1)
					t++;
					else
					t=0;
					up=1;
					t=0;
				}
				else if(btr[i]=='*')
				{
					if(up==1&& count==1)
					t++;
					else 
					t=0;
					up=2;
					
				}
				counti++;
			}
		}
		if(counti==0)
		counti=1;
		cout<<counti-1+count<<endl;
		
	}
}

