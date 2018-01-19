#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		char arr[n];
		for(i=0;i<n;i++)
		cin>>arr[i];
		int t=1;
		for(i=0;i<n;i++)
		{
			if(arr[i]=='H' && t==0 )
			{
				cout<<"Invalid"<<endl;
				goto aman;
			}
			else if(arr[i]=='T' && t==1)
			{
				cout<<"Invalid"<<endl;
				goto aman;
			}
			
			if(arr[i]=='H'&& t==1)
			{
				t=0;
			}
			if(arr[i]=='T'&& t==0)
			{
				t=1;
			}
		}
		if(t==0)
		{
			cout<<"Invalid"<<endl;
			goto aman;
		}
		cout<<"Valid"<<endl;
		aman: ;
	}
}
