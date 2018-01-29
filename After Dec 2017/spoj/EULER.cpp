#include<bits/stdc++.h>
using namespace std;

int euler(int n)
{
	int res=n;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			while(n%i==0)
			n=n/i;
			res=res-res/i;
		}
	}
	if(n>1)
	res=res-res/n;
	return res;
}

int main()
{
	int n;
	while(1)
	{
	cin>>n;
	cout<<euler(n)<<endl;
   }
}
