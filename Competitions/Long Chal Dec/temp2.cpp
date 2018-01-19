#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	while(1)
	{
	int i,j,k;
cin>>a>>b>>c;
	int x=min(a,b),y=min(b,c),z=min(c,a);
	int maxi=0,q=max(a,max(b,c));
	for(i=0;i<=q;i++)
	{
		for(j=0;j<=q;j++)
		{
			for(k=0;k<=q;k++)
			{
				if(i+j<=a&&j+k<=b&&k+i<=c&&maxi<i+j+k)
				maxi=max(maxi,i+j+k);
			}
		}
	}
	cout<<maxi<<endl;
}
}
