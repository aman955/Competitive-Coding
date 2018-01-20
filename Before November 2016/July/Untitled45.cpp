#include<iostream>
using namespace std;

int main()
{
	int i;
	string a="1010",b="0100",c;
	for(i=0;i<4;i++)
	{
		if((a[i]-48)||(b[i]-48))
		{
			c[i]='1';
		}
		else
		c[i]='0';
	}
	for(i=0;i<4;i++)cout<<c[i];
}
