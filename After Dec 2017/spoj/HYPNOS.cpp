#include<bits/stdc++.h>
using namespace std;

bool arr[1000];
long long  sumi(long long  x)
{
	long long temp=0;
	while(x!=0)
	{
		int c=x%10;
		temp+=(c*c);
		x=x/10;
	}
	return temp;
	
}
int main()
{
int x;
cin>>x;
x=sumi(x);
int count=1;
	while(!arr[x])
	{
		arr[x]=true;
		
		if(x==1)
		{
			cout<<count<<endl;
			return 0;
		}
		x=sumi(x);
		count++;
	}
	cout<<-1<<endl;
}
