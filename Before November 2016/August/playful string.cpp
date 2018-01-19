#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;
	string str;
	while(t--)
	{
		cin>>str;
		for(int i=0;i<str.length()-1;i++)
		{
			if(abs(str[i]-str[i+1])!=1&&abs(str[i]-str[i+1])!=25)
			{
			cout<<"NO"<<endl;
			goto aman;
		}
		}
		cout<<"YES"<<endl;
		aman: ;
	}
}
