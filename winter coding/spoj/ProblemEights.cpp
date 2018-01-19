#include<iostream>
using namespace std;


int main()
{
	long long p,t,k,i,ans;
cin>>t;
while(t--)
{
	cin>>k;
	int c=k%4;
	p=((k-1)/4);
	if(k>4)
	cout<<p;
	if(c==1)
	{
		cout<<"192"<<endl;
	}
	else if(c==2)
	{
		cout<<"442"<<endl;
	}
	else if(c==3)
	{
		cout<<"692"<<endl;
	}
	else
	{
		cout<<"942"<<endl;
	}
}
}
