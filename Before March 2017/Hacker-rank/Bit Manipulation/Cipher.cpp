#include<iostream>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	string str;
	cin>>str;
	int i,arr[n+1];
	arr[1]=str[0]-'0';
	for(i=2;i<=k;i++)
	{
		arr[i]=((str[i-1]-'0')^(str[i-2]-'0'));
	}
	for(i=k+1;i<=n;i++)
	{
		arr[i]=((str[i-1]-'0')^(str[i-2]-'0')^arr[i-k]);
	}
	for(i=1;i<=n;i++)
	cout<<arr[i];
}
