#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[201]={};
		arr[0]=1;
		if(n==0||n==1)
		{
			cout<<1<<endl;
			continue;
		}
		for(int j=2;j<=n;j++)
		{
			int carry=0;
		for(int i=0;i<=200;i++)
		{
			int c=(arr[i]*j+carry);
			arr[i]=c%10;
			carry=(c/10);
		}
       }
       int i;
       i=200;
       while(arr[i]==0)
       {
       	i--;
	   }
       for(;i>=0;i--)cout<<arr[i];
       cout<<endl;
	}
}
