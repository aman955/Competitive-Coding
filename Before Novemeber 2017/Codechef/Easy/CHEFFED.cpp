#include<iostream>
using namespace std;

int sumdig(long x)
{
	int temp=0;
	while(x!=0)
	{
		temp+=x%10;
		x=x/10;
	}
	return temp;
}


int main()
{
	long int n;
	cin>>n;
	int count=0;
	long int temp= n-100,temp2;

	for(long int i=temp;i<=n;i++)
	{
		temp2=sumdig(i);
		if(temp2+i+sumdig(temp2)==n)
		count++;
	}
	cout<<count;
}
