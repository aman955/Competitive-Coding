#include<iostream>
using namespace std;

int main()
{
	int l,r,i;
	cin>>l>>r;
	int max=0;
	for(i=l;i<=r;i++)
	{
		for(j=l+1;j<=r;j++)
		if(max<(j^i))
		{
			max=j^i;
	
		}
	}
	cout<<max;
}
