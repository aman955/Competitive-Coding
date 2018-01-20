#include<iostream>
using namespace std;

long long XOR(long long x)
{
	int a=x%8;
	if(a==0||a==1)
	return x;
	if(a==2||a==3)
	return 2;
	if(a==4||a==5)
	return x+2;
	if(a==6||a==7)
	return 0;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	long long l,r;
	cin>>l>>r;
	cout<<(XOR(r)^XOR(l-1))<<endl;
}
}
