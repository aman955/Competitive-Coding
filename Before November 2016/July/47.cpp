#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	long N,t,i;
	cin>>N>>t;
	long en,ex;
	int w[4]={0,1,2,3};
	int a[N],k;
	for(i=0;i<N;i++)cin>>a[i];
	while(t--)
	{
		cin>>en>>ex;
		k=3;
		for(i=en;i<=ex;i++)
		{
		if(a[i]<k)
		k=a[i];
		}
		if(k==1)
		cout<<"3"<<endl;
		else if(k==2)
		cout<<"2"<<endl;
		else 
		cout<<"1"<<endl;
	}
	
}
  
