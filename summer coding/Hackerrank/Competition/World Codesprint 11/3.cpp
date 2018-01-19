#include<iostream>
using namespace std;

int main()
{
	int t,a,b,i;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		for(i=0;i<m;i++)
		{
			cin>>a>>b;
		}
		if((n-2*m)%2==0)
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
	}
}
