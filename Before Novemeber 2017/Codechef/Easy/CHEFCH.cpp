#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int max1=0,max2=0;
		string str;
		cin>>str;
		int i,n=str.length();
		for(i=0;i<n;i++)
		{
			if(i&1)
			{
				//start with -
				if(str[i]=='-')
				{
					max1++;
				}
				else max2++;
				
			}
			else
			{
				//start with -
				if(str[i]=='+')
				{
					max1++;
				}
				else
				max2++;
			}
		}
		cout<<min(max1,max2)<<endl;
	}
}
