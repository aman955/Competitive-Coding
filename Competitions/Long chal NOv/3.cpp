#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p,i,j;
		cin>>n>>p;
		int count=n/p;
		if(p==1||p==2)
		{
			cout<<"impossible"<<endl;
			continue;
		}
		for(i=1;i<=count;i++)
		{
			cout<<"a";
			for(j=2;j<=p-1;j++)
			{
				cout<<"b";
			}
			cout<<"a";
		}
		cout<<endl;
	}
}
