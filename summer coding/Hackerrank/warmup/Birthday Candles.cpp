#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,arr[n],count=0;
	int max=0;
	for(i=0;i<n;i++)
	{
	cin>>arr[i];
	if(arr[i]>max)
	max=arr[i];
    }
    for(i=0;i<n;i++)
    {
    	if(arr[i]==max)
    	count++;
	}
	cout<<count<<endl;
}
