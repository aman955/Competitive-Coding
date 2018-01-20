#include<iostream>
using namespace std;

int main()
{
	int m,t,c,k;
	long n,chocolates,wrappers;
	cin>>t;
	while(t--)
	{
		k=0;
		cin>>n>>c>>m;
			chocolates=n/c;
			wrappers=chocolates;
			while(wrappers>=m)
			{
				k=wrappers;
				wrappers=wrappers/m;
			    chocolates=chocolates+wrappers;
				wrappers=wrappers+k%m;
			}
			cout<<chocolates<<endl;
			
	}
}
