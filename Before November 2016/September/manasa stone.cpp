#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int a,b,n;
	while(t--)
	{
		cin>>n>>a>>b;
		if(a>b)
		{
			int temp=a;
			a=b;
			b=temp;
		}
		
		if(a==b)
		{
			cout<<a*(n-1);
			goto aman;
		}
		for(int i=0;i<n;i++)
		{
			cout<<a*(n-1-i)+b*i<<" ";
		}
		aman:  ;
		cout<<endl;
	}
}
