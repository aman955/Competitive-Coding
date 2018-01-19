#include<iostream>
using namespace std;

int main()
{
	int p;
	cin>>p;
	while(p--)
	{
		string str1,str2;
		cin>>str1>>str2;
		long a=str1.length(),b=str2.length();
		long i,j,t[a+1][b+1]={};
	
		for(i=0;i<=a;i++)
		{
			for(j=0;j<=b;j++)
			{
				if(i==0)
				{
					t[i][j]=j;
				}
				else if(j==0)
				{
					t[i][j]=i;
				}
				else if(str1[i-1]==str2[j-1])
				{
					t[i][j]=t[i-1][j-1];
				}
				else
				{
					long t2=min(t[i-1][j],t[i][j-1]);					
					t[i][j]=min(t[i-1][j-1],t2)+1;
				}
			}
		}
		cout<<t[a][b]<<endl;
	}
}
