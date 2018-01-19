#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;



int main()
{
	long n,k,c,i;
	cin>>n;
	vector<long long int> a(n);
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a.begin(),a.end());
	for(i=0;i<n-1;i++)
	{
		if(a[i]!=a[i+1])
		c++;
	}
	k=pow(2,n-c-1);
	cout<<k;
}
