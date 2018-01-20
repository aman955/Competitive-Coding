#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	unsigned long long n;
	cin>>n;
	int count=0;
	n=n-1;
	while(n)
	{
		n=(n&(n-1));
		count++;
	}
	if(n&1)
	cout<<"Louise"<<endl;
	else cout<<"Richard"<<endl;
}
}
