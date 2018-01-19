#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n=5;
	while(1)
	{
		char arr[205][205]={},brr[205][205]={};
		cin>>n;
		if(n==0)
		break;
		string str;
		cin>>str;
		int i,j;
		for(i=0;i<str.length();i++)
		{
			arr[i/n][i%n]=str[i];
			brr[i/n][i%n]=str[i];
		}
		
		
		
		
		for(j=0;j<=(str.length()/n);j++)
		{
			if(j&1)
			{
		for(i=0;i<n;i++)
		{
		
			brr[j][n-1-i]=arr[j][i];
		}
	}
}
	
	
	for(i=0;i<n;i++)
		{
			for(j=0;j<(str.length()/n);j++)
		{
	
			cout<<brr[j][i];
		}
	
	}
	cout<<endl;
	
	
	}	
	
}
