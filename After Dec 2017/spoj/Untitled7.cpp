#include<iostream>
using namespace std;


int main()
{
		int temp=1;
	int count=0,x;
	cin>>x;
	while(temp<=x)
	{
		temp=temp*2;
		count++;
	}
	temp=temp/2;
	cout<<temp<<endl;
	cout<<count<<endl;
}
