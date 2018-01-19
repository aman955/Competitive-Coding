#include<iostream>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int n=str.length();
	int i,num,j,k;
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			for(k=j+1;k<n;k++)
			{
				num=(str[i]-'0')*100+(str[j]-'0')*10+(str[k]-'0')*1;
				if(num%8==0)
				{
					cout<<"YES"<<endl;
					cout<<num;
					return 0;
				}
			}
		}
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
		
				num=(str[i]-'0')*10+(str[j]-'0')*1;
				if(num%8==0)
				{	cout<<"YES"<<endl;
					cout<<num;
					return 0;
				}
		}
	}
	
	for(i=0;i<n;i++)
	{
				num=(str[i]-'0')*1;
				if(num%8==0)
				{
					cout<<"YES"<<endl;
					cout<<num;
					return 0;
				}
		}
		cout<<"NO";
}
