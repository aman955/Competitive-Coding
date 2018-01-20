#include<iostream>
#include<cmath>
using namespace std;

int main()
{
long n,c=0,j=0,i;
cin>>n;
long a[n],d[n]={0};
for(i=1;i<=n;i++)cin>>a[i];
i=1;

while(i!=n+1)
{
	if(a[i+1]>a[i])
	i++;
	else
	{
	 c++;
	d[c]=i;
	i++; 
    }
}
if(c==2)
cout<<"yes";
}

  
