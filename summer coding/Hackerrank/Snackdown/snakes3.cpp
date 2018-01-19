#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q,k,i,j;
		cin>>n>>q;
		int arr[n];
		for(i=0;i<n;i++)
		cin>>arr[i];
		
		while(q--)
		{
			int count=0;
			cin>>k;
			j=0; i=n-1;
		while(i>=j)
		{
			if(arr[i]>=k)
			{
				i--;
				count++;
			}
			else
			{
				while(arr[i]<k && j<=i)
				{
					arr[i]++;
					j++;
				}
				if(arr[i]>=k)
				{
					count++;
				}
			}
		}
		cout<<count<<endl;
	   }
	}
}
