#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		
		cin>>str;
		int n=str.length();
		int ans1=0,ans2=0,i,j,last;
		for(i=0;i<n;i++)
		{
			if(str[i]=='A')
			{
			for(j=i;j<n;j++)
			{
				if(str[j]=='A')
				last=j;
				if(str[j]=='B')
				break;
			}
			ans1=ans1+last-i+1;
			i=last;
			}
			
			if(str[i]=='B')
			{
			
			for(j=i;j<n;j++)
			{
				if(str[j]=='B')
				last=j;
				if(str[j]=='A')
				break;
			}
			ans2=ans2+last-i+1;
			i=last;
			}
			
		}
		cout<<ans1<<" "<<ans2<<endl;
	}
}
