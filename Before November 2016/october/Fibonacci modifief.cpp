#include<iostream>
using namespace std;

int main()
{
	long double t1,t2,tn;
	cin>>t1>>t2;
	int n,i;
	cin>>n;
	if(n==1)
	cout<<t1;
	else if(n==2)
	cout<<t2;
	else
	for(i=0;i<(n-2);i++)
	{
		tn=t1+t2*t2;
		t1=t2;
		t2=tn;
	}
	cout<<tn<<endl;
}
