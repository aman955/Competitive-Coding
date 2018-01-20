#include<iostream>
#include<string>
#include<cmath>
#include<stdio.h>
using namespace std;

int main()
{
	long length,m,n,k,i,j;
	string str,c,d;
	do
	{
	cin>>d;
	c=d;
	str=str+c;
    }while(getchar()!='\n');
    cout<<str<<endl;

	length=str.length();
	cout<<length<<endl;
	m=ceil(sqrt(length));
	n=floor(sqrt(length));
	
		if(m*n<length)
		{
			n=m;
		}
		k=0;
char a[n][m];
while(k!=length+1)
	{
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
		a[i][j]=str[k];
	
	     }
	}
	k++;
}
k=0;
		while(k!=length+1)
{	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
			cout<<a[i][j];
		
		}
		cout<<" ";
	}
	k++;
}

}
