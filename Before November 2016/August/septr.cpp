#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;



int main()
{
	long long n,i,d,j,r;
	cin>>n;
	vector<long long> a(n);
	for(i=0;i<n;i++)
	cin>>a[i];
    vector <long long> x((n*n)/2),y((n*n)/2);
	r=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			x[r]=a[i];
			y[r]=a[j];
			r++;
		}
	}
	d=r;
	for(i=0;i<=r;i++)
	{
		for(j=i+1;j<=r;j++)
		{
			if(x[i]==x[j]&&y[i]==y[j])
			{
			d--;	
			}
		}
		
	}
	cout<<d;
}
