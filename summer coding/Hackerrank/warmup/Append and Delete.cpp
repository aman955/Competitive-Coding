#include<iostream>
using namespace std;

int main()
{
	string str1,str2;
	cin>>str1>>str2;
	int k,i,count=0;
	cin>>k;
	int n1=str1.length(),n2=str2.length();
	int x=min(n1,n2);
	for( i=0;i<x;i++)
	{
		if(str1[i]==str2[i])
		{
			count++;
		}
		else
		break;
	}
	int ans=n1-count+n2-count;
	
	if(k==ans)
	{
		cout<<"Yes";
		return 0;
	}
	for(i=0;i<=2*count;i+=2)
	{
		if(i+ans==k)
		{
			cout<<"Yes";
			return 0;
		}
	}
	i=i-2;
	
	for(;i<=k;i++)
   {
	   	if(i+ans==k)
		{
			cout<<"Yes";
			return 0;
		}
	}
	cout<<"No";
	
	
	
	
}
