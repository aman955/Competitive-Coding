#include<bits/stdc++.h>
using namespace std;

int arr[200001]={};
bool brr[200001]={};
int main()
{
	int n,i,j,base;
	cin>>n;
	for(i=0;i<n;i++)
	{
	cin>>arr[i];
	arr[i]--;
    }      
	string str;
	cin>>str;
	int k=str.length();
	i=0;
	while(i<k)
	{
		base=i;
		while(i<k && str[i]=='1')
		{
			i++;
		}
	
		for(j=base;j<=i;j++)
		{
			brr[arr[j]]=true;
		}
		for(j=base;j<=i;j++)
		{
			if(!brr[j])
			{
				cout<<"NO"<<endl;
				return 0;
			}
			brr[j]=false;
		}
		i++;
	}
	cout<<"YES"<<endl;
	
}
