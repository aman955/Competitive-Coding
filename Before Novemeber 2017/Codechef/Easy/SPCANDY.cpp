#include<iostream>
using namespace std;
 
int main()
{
int t;
cin>>t;
while(t--)
{
long long n,k;
cin>>n>>k;
if(k==0)
{
	cout<<0<<" "<<n<<endl;
	continue;
}
cout<<n/k<<" "<<n%k<<endl;
}
}
