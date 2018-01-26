#include<iostream>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long a,b;
		cin>>a;
		char c;
		cin>>c;
		int p=0;
		while(1)
		{
			if(p==0)
			{
				cin>>b;
				if(c=='+')
				{
					a=a+b;
				}
				else if(c=='-')
				{
					a=a-b;
				}
				else if(c=='/')
				{
					a=a/b;
				}
				else
				{
					a=a*b;
				}
				p=1;
			}
			else
			{
				p=0;
				cin>>c;
				if(c=='=')
			{
				cout<<a<<endl;
				p=2;
				break;
			}
		    
			}
			if(p==2)
			{
				break;
			}
			
		}
	}
}
