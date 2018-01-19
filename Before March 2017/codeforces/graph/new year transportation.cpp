#include<iostream>
using namespace std;

int main()
{
	int n,t,i;
	cin>>n>>t;
	int a[n+1],point=1;
	for(i=1;i<n;i++)
	{
		cin>>a[i];
		if(point==i)
		{
		point=point+a[point];
		if(point==t)
		{
		cout<<"YES"<<endl;
	    return 0;
		}
	    }
    }
	cout<<"NO"<<endl;
	
}
