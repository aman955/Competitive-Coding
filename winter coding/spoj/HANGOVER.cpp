#include<iostream>
using namespace std;

int main()
{
	int n,i;
	double x=0,k=1,t=1;
	while(1)
	{
		cin>>k;
		if(k==0.00)
		{
			break;
		}
		x=0;
	for(i=2;i<=300;i++)
	{
		x=(x)+t/double(i);
		if(k<=x)
		{
			cout<<i-1<<" card(s)"<<endl;
			break;
		}	
	}

    }
}
