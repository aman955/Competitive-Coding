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
		int i,n=str.length();
		int arr[26]={},brr[26]={};
		for(i=0;i<n/2;i++)arr[str[i]-'a']++;
		for(i=(n+1)/2;i<n;i++)brr[str[i]-'a']++;
		
		
		for(i=0;i<26;i++)
		{
		if(arr[i]!=brr[i])
		break;
		}
		
		if(i==26)
		{
		cout<<"YES"<<endl;
		}
		else
		cout<<"NO"<<endl;
	}
}
