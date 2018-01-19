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
		int a=0,b=0;
		int p,i;
		for(i=0;i<str.length();i++)
		{
			if(str[i]=='a')a++;
			else b++;
		}
		if(a>b+1||b>a+1)cout<<"-1"<<endl;
		else
		{
			if(a>=b)
			{
				cout<<'a';
				int n=str.length();
				n--;
				p=1;
				while(n--)
				{
					if(p)
					{
					 cout<<'b';
					 p=0;
				    }
				    else
				    {
				    	cout<<'a';
				    	p=1;
					}
			    }
			    cout<<endl;
		}
		else
		{
			
				cout<<'b';
				int n=str.length();
				n--;
				p=1;
				while(n--)
				{
					if(p)
					{
					 cout<<'a';
					 p=0;
				    }
				    else
				    {
				    	cout<<'b';
				    	p=1;
					}
			    }
			cout<<endl;
		}
	
	
	
   }
}
}
