#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,m,n,x;
		cin>>m>>n;
		int arr[10001]={0};
		for(i=1;i<=n;i++)
		{
			cin>>x;
			arr[x]=i;
		}
		for(i=1;i<=10000;i++)
		{
			if(arr[m-arr[i]]&& arr[i] && i!=m-arr[i])
			{
				if(arr[i]>arr[m-arr[i]])
				{
					cout<<arr[m-arr[i]]<<" "<<arr[i]<<endl;
				}
				else
					cout<<arr[i]<<" "<<arr[m-arr[i]]<<endl;
				break;
			}
		}
	}
}
