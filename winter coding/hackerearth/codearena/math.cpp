#include<iostream>
#include<cmath>
using namespace std;

int main()
{

int t;
cin>>t;
while(t--)
{
	int n,d,r;
	cin>>n>>d>>r;
	for(int i = 0; i <r; i++)
    {
        n = (n%d)* 10;
    }
cout<<floor(n/d)<<endl;
}
}
