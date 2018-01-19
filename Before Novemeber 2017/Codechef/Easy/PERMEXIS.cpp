#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
int n,i;
cin>>n;
long arr[n];
for(i=0;i<n;i++)cin>>arr[i];
sort(arr,arr+n);
for(i=0;i<n-1;i++)
{
if(arr[i+1]-arr[i]>1)
{
cout<<"NO"<<endl;
goto aman;
}
}
cout<<"YES"<<endl;
aman:;
}
}

