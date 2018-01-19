#include<iostream>
#include<string>
using namespace std;
int check(string l,int n);

int check(string l,int n)
{
	for(int i=0;i<(n+1)/2;i++)
	{
		if(l[i]!=l[n-i-1])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int t,i,l=1;
	cin>>t;
	string str,k;
	while(t--)
	{
		cin>>str;
		if(check(str,str.length()))
		{
			cout<<"-1"<<endl;
			goto aman;
		}
		k=str.substr(1);
			if(check(k,k.length()))
		{
			cout<<"0"<<endl;
			goto aman;
		}
		for(i=1;i<str.length()-1;i++)
		{
		k=str;
		k=str.substr(0,i-1)+str.substr(i+1);
		if(check(k,k.length()))
		{
			break;
		}
     	}
     	if(i==str.length())
     	{
     		cout<<"-1"<<endl;
		 }
		 else
     	cout<<i<<endl;
     	
     	aman:  ;
		
	}
}
