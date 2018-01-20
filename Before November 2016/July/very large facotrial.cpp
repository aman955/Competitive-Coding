#include<iostream>
using namespace std;

int main()
{
	int n,j,k,l,s,carry,i,digits=0,a[200]={0};
	cin>>n;
	k=n;
	l=n;
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
		for(i=1;i<200;i++)
		{
			k=a[i]*j+carry;
			a[i]=k%10;
			carry=k/10;
		}
	}
	s=199;
	while(a[s]==0)
	{s--;
	}

for(i=s;i>0;i--)
cout<<a[i];

}
