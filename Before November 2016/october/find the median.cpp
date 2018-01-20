#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
long n,i;
cin>>n;
vector<int> a(n);
    for(i=0;i<n;i++)
	{
	cin>>a[i];
}
    sort(a.begin(),a.end());
    cout<<a[n/2-1];
}
