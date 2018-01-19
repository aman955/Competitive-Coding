#include<iostream>
using namespace std;

int main()
{
	int q,i,j;
	cin>>q;
	string str,hack="hackerrank";
	while(q--)
	{
		cin>>str;
		int j=0;
		for(i=0;i<str.length();i++)
		{
			if(str[i]==hack[j])
			{
				j++;
			}
			if(j==9)
			{
				cout<<"YES"<<endl;
				goto aman;
			}
		}
		cout<<"NO"<<endl;
		aman:  ;
	}
}
