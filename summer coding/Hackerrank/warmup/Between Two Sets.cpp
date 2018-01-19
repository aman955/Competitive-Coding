#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}



int lcm(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int lcmi(int a ,int b)
{
	return (a*b)/lcm(a,b);
}

int main()
{
	int n,i,m;
	cin>>n>>m;
	int lcmf,gcdf;
	int arr[n],brr[m];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<m;i++)
	{
		cin>>brr[i];
	}
	if(n!=1)
	lcmf = lcmi(arr[0],arr[1]);
    else
    lcmf=arr[0];
    
	for(i=2;i<n;i++)
	{
		lcmf = lcmi(lcmf,arr[i]);
	}
	if(m!=1)
	gcdf = gcd(brr[0],brr[1]);
	else
	gcdf = brr[0];
	for(i=2;i<m;i++)
	{
		gcdf = gcd(gcdf,brr[i]);
	}
	int count =0 ;

	for(i=lcmf;i<=gcdf;i=i+lcmf)
	{
		if(gcdf%i==0)
		count++;
	}
	cout<<count;
}
