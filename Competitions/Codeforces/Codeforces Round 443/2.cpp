#include<iostream>
using namespace std;

int main()
{

	long long j,n,k,i,temp,count;
	cin>>n>>k;
	int arr[n];
	for(i=0;i<n;i++)cin>>arr[i];
	
	if(n<=k)cout<<n<<endl;
	else
	{
		temp=arr[0];
		count=1;
		for(i=0;i<n;i++)
		{
			count=0;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				count++;
			}
			else
			break;
		}
		if(count>=k)
		{
			cout<<arr[i]<<endl;
			return 0;
		}
		}
		cout<<n<<endl;
}
}
