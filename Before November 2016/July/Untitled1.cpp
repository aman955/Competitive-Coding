#include<iostream>
using namespace std;

int main()
{
	int c=0,t;
	cin>>t;
long long n,s,k;


while(t--)
{
	cin>>n;
s=n;
c=0;
while(n!=0)
{
	k=n%10;
	if(k!=0&&s%k==0)
	c++;
	n=n/10;
}
cout<<c;
}
}

