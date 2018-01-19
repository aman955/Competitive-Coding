#include<bits/stdc++.h>
using namespace std;




int main()
{
	int n,q;
	cin>>n>>q;
	int nodes=0;
	while(pow(2,nodes)<n)
	{
		nodes++;
	}
	int nodesize=2*pow(2,nodes)-1;
	cout<<nodesize;
	
}
