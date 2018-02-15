#include<bits/stdc++.h>
using namespace std;

double arr[100005];

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double c,d,s;
		int n;
		double maxi=0.0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]>maxi)
			{
				maxi=arr[i];
			}
		}
		cin>>c>>d>>s;
		maxi=(maxi)*(c-1.0);
		printf("%.9lf\n",maxi);
	}
}
