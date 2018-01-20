#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main()
{
	char s[1200][100]={'\0'};
	int i=0,d=0;
	do
	{
	cin>>s[i++];
	if(getchar()=='\n')
	d++;
}while(getchar()!='\n');
		cout<<d;
	for(int j=0;j<i;j++)
	cout<<s[j]<<" ";
}

