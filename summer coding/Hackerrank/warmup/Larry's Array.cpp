#include<iostream>
using namespace std;

int getInvCount(int arr[], int n)
{
  int inv_count = 0;
  for (int i = 0; i < n - 1; i++)
    for (int j = i+1; j < n; j++)
      if (arr[i] > arr[j])
        inv_count++;
 
  return inv_count;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int arr[n];
		for(i=0;i<n;i++)cin>>arr[i];
         if((getInvCount(arr,n))%2==0)
		 cout<<"YES"<<endl;
		 else
		 cout<<"NO"<<endl;		
		
		
	}
}
