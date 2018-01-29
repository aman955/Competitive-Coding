#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,j;
		string atr,btr,ctr;
		char a,b;
		int n=0,m=0;
		cin>>atr;
		cin>>a;
		cin>>btr;
		cin>>b;
		cin>>ctr;
		
		for(i=0;i<atr.length();i++)
		{
			if(atr[i]=='m')
			{
				for(j=0;j<btr.length();j++)
				{
					n=n*10+(btr[j]-'0');
				}
				for(j=0;j<ctr.length();j++)
				{
					m=m*10+(ctr[j]-'0');
				}
				cout<<(m-n)<<" + "<<n<<" = "<<m<<endl;
				break;
			}
		}
		if(i!=atr.length())
		continue;
		
			for(i=0;i<btr.length();i++)
		{
			if(btr[i]=='m')
			{
				for(j=0;j<atr.length();j++)
				{
					n=n*10+(atr[j]-'0');
				}
				for(j=0;j<ctr.length();j++)
				{
					m=m*10+(ctr[j]-'0');
				}
				cout<<(n)<<" + "<<(m-n)<<" = "<<m<<endl;
				break;
			}
		}
		if(i!=btr.length())
		continue;
		
				for(i=0;i<ctr.length();i++)
		{
			if(ctr[i]=='m')
			{
				for(j=0;j<atr.length();j++)
				{
					n=n*10+(atr[j]-'0');
				}
				for(j=0;j<btr.length();j++)
				{
					m=m*10+(btr[j]-'0');
				}
				cout<<(n)<<" + "<<(m)<<" = "<<m+n<<endl;
				break;
			}
		}
		if(i!=ctr.length())
		continue;
	
	}
}
