#include<iostream>
using namespace std;

int main()
{
 int n,i;
 cin>>n;
 int arr[n+1]={0},x;
 for(i=1;i<=n;i++)
 {
 	cin>>x;
 	arr[x]++;
 }
 int max=0;
 for(i=1;i<n;i++)
 {
 	if(arr[i]+arr[i+1]>max)
 	max=arr[i]+arr[i+1];
 }
 cout<<max;
}
