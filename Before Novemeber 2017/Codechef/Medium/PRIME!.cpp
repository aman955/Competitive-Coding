#include<iostream>
using namespace std;
 
int prime(int i)
{
    int c=0;
    if(i==1)
    return 0;
    for(int j=2;j*j<=i;j++)
    {
        if(i%j==0)
        return 0;
    }
    return 1;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n1,n2;
	    cin>>n1>>n2;
	    for(int i=n1;i<=n2;i++)
	    if(prime(i)==1)
	    cout<<i<<endl;
	    cout<<endl;
	}
	return 0;
}
