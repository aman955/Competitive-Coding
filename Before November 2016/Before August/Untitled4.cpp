#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;

int c,i,f,a[n],k;
for(i=0;i<n;i++)
{
	cin>>a[i];
	c=1;
while(a[i]!=0)
{
	c=c*a[i];
	a[i]--;
}
cout<<c<<endl;
}
return 0;
}
