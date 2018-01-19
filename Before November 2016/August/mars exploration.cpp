#include<iostream>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int c=0;
	for(int i=0;i<str.length();i++)
	{
		if((i%3==0||i%3==2)&&str[i]!='S')
		c++;
		if(i%3==1&&(str[i]!='O'))
		c++;
	}
	cout<<c;
}
