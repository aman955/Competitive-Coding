#include<iostream>
using namespace std;

int main()
{
	long n,k;
	long long total,sum=0;

	cin>>n>>k;
	int c[n];
	for(int i=0;i<n;i++)
	{
	cin>>c[i];
	if(i!=k)
	{
	sum=sum+c[i];
    }
    }
    cin>>total;
    sum=sum/2;
    if(sum==total)
    cout<<"Bon Appetit";
    else
    cout<<total-sum;
}
	

