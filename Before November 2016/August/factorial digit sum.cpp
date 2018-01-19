#include<iostream>
using namespace std;

int main()
{
	int n,t,j,k,l,s,carry,i,digits=0,a[10000],sum;
	cin>>t;
	while(t--)
	{
		sum=0;
		digits=0;
	cin>>n;
	int a[100000]={0};
	k=n;
	l=n;
	if(n==0)
	cout<<"1"<<endl;
	else
	{
	while(k!=0)
	{
		k=k/10;
		digits++;
	}
	for(i=1;i<=digits;i++)
	{
		a[i]=l%10;
		l=l/10;
	}
	
	for(j=n-1;j>0;j--)
	{carry=0;
		for(i=1;i<100000;i++)
		{
			k=a[i]*j+carry;
			a[i]=k%10;
			carry=k/10;
		}
	}
	s=99999;
	while(a[s]==0)
	{s--;
	}

for(i=s;i>0;i--)
{
	sum=sum+a[i];
}
cout<<sum<<endl;
}
}

}
