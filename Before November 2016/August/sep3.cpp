#include<iostream>
using namespace std;

int main()
{
	int n,i,e,s,c=0;
	cin>>n;
	int a[n+1];
	for(i=1;i<n+1;i++)cin>>a[i];
	cin>>s>>e;
	i=s;
	while(i!=e)
	{
		i=a[i];
		c++;
		if(c>n)
		{cout<<"No";
	 return 0;
	}
}
	cout<<"Yes";
}

