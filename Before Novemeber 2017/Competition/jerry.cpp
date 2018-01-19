#include<iostream>
using namespace std;


int main()
{
int n;
cin>>n;
int arr[n+1],i;
arr[0]=0;
for(i=1;i<=n;i++)
{
	cin>>arr[i];
}


int t,l,r;
cin>>t;
while(t--)
{
	cin>>l>>r;
	int e=r-l+1;
	if(e%2==0)
	{
		cout<<"Ferb"<<endl;
	}
	else
	cout<<"Phineas"<<endl;
}

}
