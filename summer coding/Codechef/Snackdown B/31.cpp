#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		string atr,btr;
		cin>>n;
		cin>>atr;
		cin>>btr;
			int i,count=0,counti=0;
		for(i=0;i<n;i++)
		{
			if(atr[i]=='*'&&btr[i]=='*')
			{
				count=1;
				break;
			}
		}
		
		for(i=0;i<n;i++)
		{
			if(arr[i]=='*'||brr[i]=='*')
			{
				if(arr[i]=='*')
				{
					up++;
				}
				
				if(brr[i]=='*')
				{
					down++;
				}
			}
		}
