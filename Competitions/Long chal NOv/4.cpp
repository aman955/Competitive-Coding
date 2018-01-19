#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,i,j,k,count;
		cin>>n>>a;
		if(a==1)
		{
			cout<<n<<" ";
			for(i=0;i<n;i++)
			cout<<"a";
			cout<<endl;
			continue;
		}
		if(a>=3)
		{
			int k=1;
			cout<<"1 ";
			for(i=0;i<n;i++)
			{
				if(k==1)
				{
					cout<<"a";
					k=2;
				}
				else if(k==2)
				{
					cout<<"b";
					k=3;
				}
				else if(k==3)
				{
					cout<<"c";
					k=1;
				}
			}
			cout<<endl;
		}
		else if(a==2)
		{
			if(n==1)
			{
				cout<<1<<" a"<<endl;
				
			}
			else if(n==2)
			{
				cout<<"1 ab"<<endl;
				
			}
			else if(n==3)
			{
				cout<<"2 abb"<<endl;
			
			}
			else if(n==4)
			{
				cout<<"2 aabb"<<endl;
			
			}
			else if(n==5)
			{
				cout<<"3 aaabb"<<endl;
			
			}
			else if(n==6)
			{
				cout<<"3 aaabbb"<<endl;
			
			}
			else if(n==7)
			{
				cout<<"3 aaababb"<<endl;
	
			}
			else if(n==8)
			{
				cout<<"3 aaababbb"<<endl;
			}
			else
			{
				
			string s="aababbaababb";
			cout<<4<<" ";
			
			count=n/12;
			
			for(i=1;i<=count;i++)
			{
				cout<<s;
			}
			count=n%12;
			for(i=0;i<count;i++)
			{
				cout<<s[i];
			}
		      cout<<endl;
		    }
		}
	}
}
