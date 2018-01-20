#include<iostream>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int c=1;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]<97)
		c++;
	}
	cout<<c;
}
