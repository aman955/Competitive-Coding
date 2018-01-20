#include<iostream>
using namespace std;

int main()
{
	int t,i;
	cin>>t;
	long n,k;
	while(t--)
	{
		cin>>n;
		if(n==1||n==2||n==4||n==7)cout<<"-1"<<endl;
		else if(n%3==0)
		{
			k=n;
			while(k!=0)
			{
				cout<<"5";
	            k--;
			}
			cout<<endl;
		}
		else if(n%3==2)
		{
			k=n-5;
			while(k--)
			{
				cout<<"5";
			}
			for(i=0;i<5;i++)cout<<"3";
			cout<<endl;
		}
		else
		{
			k=n-10;
		while(k--)
			{
				cout<<"5";
			}
			for(i=0;i<10;i++)cout<<"3";
			cout<<endl;
		}
		
	}
}
