#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int n,k,l=0,count=0,i;
	cin>>n>>k;
		if(n>=k)
		{
		for(i=1;i<=k/2;i++)
		{
	
			count=count+(k-i)-l;
			l++;
		}
	}
	cout<<count;
	}
