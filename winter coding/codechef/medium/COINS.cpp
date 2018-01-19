#include<iostream>
using namespace std;

long long int maxi[100005]={};

long long int recur(long long int n)
{
	if(n<=100000)
	return maxi[n];
	return max(n,recur(n/2)+recur(n/3)+recur(n/4));
}

int main()
{
	long long int i,n;
	int t;
	for(i=0;i<=3;i++)
	maxi[i]=i;
	for(i=4;i<=100000;i++)
	{
		maxi[i]=max(i,maxi[i/2]+maxi[i/3]+maxi[i/4]);
	}

 
    while(cin>>n)
    {
	cout<<recur(n)<<endl;
    }
}
