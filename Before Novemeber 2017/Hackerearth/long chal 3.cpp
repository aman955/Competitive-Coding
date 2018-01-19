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

		if(n&1)
		{
					for(int i=0;i<n-3;i++)
			{
				if(i&1)
				{
					cout<<i<<" ";
				}
				else
				{
					cout<<i+2<<" ";
				}
			}
			cout<<n-1<<" "<<n<<" "<<n-2<<endl;
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				if(i&1)
				{
					cout<<i<<" ";
				}
				else
				{
					cout<<i+2<<" ";
				}
			}
			cout<<endl;
		}
	}
}
