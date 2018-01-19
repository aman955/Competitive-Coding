
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
	long  i,x;
	vector<long int> arr;
	do
	{
		cin>>x;
		arr.push_back(x);
	}
	while(cin.get()!='\n');
	long n=arr.size(),t=1;
	for(i=0;i<arr.size();i++)
	{		
	if((n-1)==arr[i]&& t==1)
	{
		t=0;
	arr[i]=-1;		
    }
	}
	long max=-1;
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	cout<<max<<endl;
	
	
	}
}

