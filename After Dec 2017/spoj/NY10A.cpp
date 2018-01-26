#include<bits/stdc++.h>
using namespace std;


int main()
{
	string str;
	int t,j,i;
	cin>>t;
	for(j=1;j<=t;j++)
	{
		int arr[8]={};
		int x;
		cin>>x;
	cin>>str;
	int brr[str.length()+1]={};

	for(i=0;i<str.length();i++)
	{
		if(str[i]=='H')
		brr[i]=1;
		else 
		brr[i]=0;
	}

	for(i=0;i<str.length()-2;i++)
	{

		int c=brr[i]*4 + brr[i+1]*2 +brr[i+2];
		

		arr[c]++;
		
	}

	cout<<j<<" ";
for(i=0;i<8;i++)
cout<<arr[i]<<" ";
cout<<endl;
	}
	
}
