#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int price[n+1];
		for(i=1;i<=n;i++)
		{
			cin>>price[i];
		}
		
		long long profit=0;
		long max=0;
		for(i=n;i>0;i--)
		{
			if(price[i]>max)
			{
				max=price[i];
			}
			profit+=max-price[i];
		}
		cout<<profit<<endl;
	}
}
