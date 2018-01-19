#include<iostream>
using namespace std;

int main()
{
	int n,c,d=0,i;
	string str;
	cin>>str;
	int a[26]={0};
	n=str.length();
	for(i=0;i<n;i++)
    {
    	c=str[i]-97;
    	a[c]++;
	}
	if(n%2==0)
	{
		for(i=0;i<26;i++)
		{
			if(a[i]%2==1)
			{
				cout<<"NO";
				return 0;
			}
		}
		cout<<"YES";
	}
	else
	{
		for(i=0;i<26;i++)
		{
			if(a[i]%2==1)
			d++;
		}
		if(d!=1)
		cout<<"NO";
		else
		cout<<"YES";
	}
}
