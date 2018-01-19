#include<iostream>
#include<cmath>
using namespace std;

int divp[10001]={},sumi[10001]={};

void divi()
{
	int i,j,temp,n;
	for(int i=1;i<=10000;i++)
	{
		temp=0;
		n=sqrt(i);
		for(int j=1;j<=n;j++)
		{
			if(i%j==0)
			temp++;
		}
		divp[i]=temp;
		sumi[i]=sumi[i-1]+divp[i];
	}
	
}
int main()
{
	int n;
	divi();
cin>>n;
cout<<sumi[n]<<endl;
}
