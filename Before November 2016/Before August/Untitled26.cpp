#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int n,i,k,g,j,f,d=0,e=0,h;
	cin>>n;
	int a[n],b[n],m[n];
  for(i=0;i<n;i++)
  cin>>a[i]>>b[i];
	for(i=0;i<n;i++)
	{
		d=d+a[i];
		e=e+b[i];
		f=d-e;
		j=a[i]-b[i];
		m[i]=abs(j);
		if(f>0)
		g=g+f;
		else
		h=h-f;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
		if(m[j+1]>m[j])
		m[j]=m[j+1];
	    }
		
		
	}
	if(g>h)
	cout<<"1 " <<m[0];
	else
	cout<<"2 "<<m[i];
	
}
