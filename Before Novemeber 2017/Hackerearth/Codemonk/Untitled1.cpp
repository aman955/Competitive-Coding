#include<iostream>
using namespace std;

int arr[1000001]={};

void max_heapify(int arr[],int i,int n)
{
	int left=2*i;
	int right=2*i+1;
	int largest;
	if(arr[i]<=n&&arr[left]>arr[i])
	largest=left;
	else
	largest=i;
	if(arr[i]<=n&&arr[right]>arr[largest])
	largest=right;
	
	if(i!=largest)
	{
		swap(arr[i],arr[largest]);
		max_heapify(arr,largest,n);
	}
}

void build_heap(int arr,int n)
{
	for(int i=n/2;i>0;i--)
	{
		max_heapify(arr,i,n);
	}
}


void insertheap(int arr[],int n,int val)
{
arr[1]--;
int i=1;
while(i<=(n/2))
{
	if(arr[2*i]>arr[i])
	{
		swap(arr[2*i],arr[i]);
		i=2*i;
	}
	else if(arr[2*i+1]>arr[i])
	{
		swap(arr[2*i+1],arr[i]);
		i=2*i+1;
	}
	else
	{
		break;
	}
}
	
}
int main()
{
	int n,m;
	cin>>n>>m;
	int i;
	long long ans=0;
	for(i=1;i<=n;i++)cin>>arr[i];
	build_heap(arr,n);
	for(i=1;i<=m;i++)
	{
		maxi=arr[1];
		insertheap(arr,n,maxi-1);
		ans+=maxi;
	}
	cout<<ans<<endl;
}
