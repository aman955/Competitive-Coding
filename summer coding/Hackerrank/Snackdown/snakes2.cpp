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
		int arr[n+1];
		for(i=1;i<=n;i++)
		cin>>arr[i];
		
		if(!(n&1))
		{
			cout<<"no"<<endl;
			goto aman;
		}
		for(i=1;i<=n/2+1;i++)
		{
			if(!(arr[i]==arr[n+1-i]&&arr[i]==i))
			{
				cout<<"no"<<endl;
				goto aman;
			}
		}
		cout<<"yes"<<endl;
		aman: ;
	}
}
