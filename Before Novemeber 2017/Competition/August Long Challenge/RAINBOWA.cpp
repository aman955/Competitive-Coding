#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int arr[n],brr[n],crr[8]={};
		for(i=0;i<n;i++)
		cin>>arr[i];
		for(i=0;i<n;i++)
		{
			brr[i]=arr[n-1-i];
			crr[brr[i]]++;
		}
		for(i=1;i<=7;i++)
		{
			if(crr[i]==0)
			{
				cout<<"no"<<endl;
				goto aman;
			}
		}
		if(arr[0]!=1)
		{
			cout<<"no"<<endl;
			goto aman;
		}
		for(i=0;i<n;i++)
		{
			if(arr[i]!=brr[i])
			{
				cout<<"no"<<endl;
				goto aman;
			}
		}
		
		for(i=0;i<(n-1)/2;i++)
		{
			if(arr[i]==arr[i+1]||arr[i]+1==arr[i+1])
			{
				continue;
			}
			else
			{
				cout<<"no"<<endl;
				goto aman;
			}
		}
		cout<<"yes"<<endl;
		aman: ;
		
}

}
