#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	
	int n,k,i,j;
	cin>>n>>k;
	vector<long> c(n);
	long sum=0;
	for(i=0;i<n;i++)
	{
	cin>>c[i];
	sum+=c[i];
     }
     sort(c.begin(),c.end());
     if(k>=n)
     {
     	cout<<sum;
     	return 0;
	 }
	 int l=1;
	int temp=k;
	long sum1=0;
	 for(i=n-1;i>=0;i--)
	{
			 if(temp==0)
	 {
	 	temp=k;
	 	l++;
	 }
		if(temp>0)
		{
			sum1=sum1+c[i]*l;
			temp--;
		}

     }
	cout<<sum1;
}
