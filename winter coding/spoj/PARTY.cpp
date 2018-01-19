#include<bits/stdc++.h>
using namespace std;

int dpmax[501]={};
bool check[501];
int arr[100]={},n;
int fun[100]={};

int maxi(int bud)
{
	if(bud<0)
	return -INT_MAX;
	if(bud==0)
	{
		check[bud]=true;
		return 0;
	}
	if(check[bud])
	{
		check[bud]=true;
		return dpmax[bud];
	}

	for(int i=0;i<n;i++)
	{
		cout<<123<<endl;
		if(bud-arr[i]>=0)
		dpmax[bud]=max(dpmax[bud],maxi(bud-arr[i])+fun[i]);
	}
	check[bud]=true;;
	return dpmax[bud];
}

int main()
{
	int bud;
	cin>>bud>>n;
	int arr[n]={};
	for(int i=0;i<n;i++)
	{
		cin>>arr[i]>>fun[i];
	}
	
	cout<<maxi(bud);

}
