#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j;
	cin>>t;
	while(t--)
	{
		int n,d;
		int arr[100000];
		cin>>n>>d;
		long long int total=0,count=0;
		for(i=0;i<n;i++)
		{
	        cin>>arr[i];
			total+=arr[i];
		}
		int average=total/n;
		if(total%n==0) {
			for(i=0;i+d<n;i++)
			{
				if(arr[i]<average)
				{
			 count+=average-arr[i];
			 arr[i+d]-=(average-arr[i]);
			 arr[i]=average;
			 }
			 else
			 {
			 	count+=arr[i]-average;
			 	arr[i+d]+=arr[i]-average;
				arr[i]=average;
			 }
			}
	cout<<count<<endl;
		}
		else
		cout<<"-1"<<endl;
 
	}
 
 
	return 0;
}
