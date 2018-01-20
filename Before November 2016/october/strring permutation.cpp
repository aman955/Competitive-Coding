#include<iostream>
using namespace std;

void Permutation(char str[],int i,int n);
void swap(char a,char b);

int main()
{
Permutation("rman",0,3);
	
}
swap(char *a,char *b)
{
char temp;
temp=*a;
*a=*b;
*b=temp;
}

void Permutation(char str[],int i,int n)
{
	if(i==n)
	{
		for(int k=0;k<n;k++)
		{
			cout<<str[k];
		}
		
	}
	
	else {
		for(int j=i;j<=n;j++)
		{
			swap(&str[j],&str[i]);
			Permutation(str,i+1,n);
			swap(&str[j],&str[i]);
		}
	}
	
}
