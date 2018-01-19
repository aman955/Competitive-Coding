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
		int n=str.length();
		for(int i=0;i<n-1;i++)
		{
			if(str[i]==str[i+1])
			{
				cout<<"Yes"<<endl;
				goto aman;
			}
		}
		if(n==3)
		{
			if(str[0]==str[2])
			{
				cout<<"Yes"<<endl;
				goto aman;
			}
		}
		
		for(int i=1;i<n-2;i++)
		{
			if(str[i-1]==str[i+1])
			{
				cout<<"Yes"<<endl;
				goto aman;
			}
			
		}
		if(str[n-1]==str[n-2])
		{
			cout<<"Yes"<<endl;
			goto aman;
		}
		cout<<"No"<<endl;
		
		aman: ;
	}
}
