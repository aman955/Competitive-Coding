#include<iostream>
using namespace std;

int main()
{
	int p,i;
	cin>>p;
	while(p--)
	{
		string s,t;
		cin>>s>>t;
		int arr[26]={},brr[26]={};
		int count,counti;
		for(i=0;i<s.length();i++)
		{
			arr[s[i]-'a']++;
		}
		for(i=0;i<t.length();i++)
		{
			brr[t[i]-'a']++;
		}
		for(i=0;i<26;i++)
		{
			if(arr[i]>=2&& brr[i]==0)
			{
				cout<<"A"<<endl;
				goto aman;
			}
		}
			count=0;counti=1;
			for(i=0;i<26;i++)
		{
			if(arr[i]>=1&& brr[i]==0)
			{
				count++;
			}
			if(brr[i])
			{
				if(!arr[i])
				counti=0;
			}
		}
			if(count>0&& counti>0)
		{
				cout<<"A"<<endl;
				goto aman;
		}
	
		cout<<"B"<<endl;
		aman: ;
	}
}
