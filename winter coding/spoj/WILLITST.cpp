#include<bits/stdc++.h>
using namespace std;

int main()
{
	unsigned long long n;
	scanf("%lld",&n);
	unsigned long long int i,t=2;
	for(i=0;i<64;i++)
	{
		if(t==n)
		{
			cout<<"TAK"<<endl;
	        return 0;
		}
		t=t*2;	
	}
	cout<<"NIE"<<endl;
	
}
