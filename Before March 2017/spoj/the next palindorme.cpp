#include<iostream>
using namespace std;

int pali(long x)
{
	long temp=0,t=x;
	int b;
	while(t!=0)
	{
		b=t%10;
		temp=temp*10+b;
		t=t/10;
	}
	if(temp==x)
	return 1;
	return 0;
}

int main()
{
	int t;
	cin>>t;
	long a[t];
	long n;
	for(int i=0;i<t;i++)
	{
	 cin>>n;
	 n++;
	while(!pali(n))
	{
	n++;	
	}
	a[i]=n;
    }
    for(int i=0;i<t;i++)
    {
    	cout<<a[i]<<endl;
	}
}
