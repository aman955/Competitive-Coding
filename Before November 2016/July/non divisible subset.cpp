#include<iostream>
using namespace std;

int main()
{
	long long p;
	int k,n,i,j,c=0,d;
	cin>>n>>k;
	int b[k+1]={0};

	
	for(i=0;i<n;i++)
	{
		cin>>p;
		for(j=0;j<k;j++)
		{
		if(p%k==j)
		b[j]++;
	    }
	}

for(i=1;i<(k-1)/2+1;i++)
{
if(b[i]>b[k-i])
d=b[i];
else if(b[i]<=b[k-i]&&b[k-i]>0)
d=b[k-i];
else d=0;
c=c+d;
}
if(b[0]>0)
c=c+1;
if(k%2==0 && b[(k/2)]>0)
c=c+1;

cout<<c;
}
