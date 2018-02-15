#include<bits/stdc++.h>
using namespace std;

double arr[100005],brr[100005],crr[100005];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		
		for(i=1;i<=n;i++)cin>>arr[i];
		double c,d,s;
		cin>>c>>d>>s;
		double a=(d/s);
		crr[0]=0;
		brr[0]=0;
		brr[1]=arr[1];
	    for(i=2;i<=n;i++)
	    {
	    	brr[i]=brr[i-1]+a+arr[i];
		} 
		crr[1]=arr[1]*2;
		
		for(i=2;i<=n;i++)
		{
			if(brr[i]<=crr[i-1]+a)
			crr[i]=crr[i-1]+a+arr[i];
			else
			{
				crr[i]=((brr[i])+arr[i]);
			}
		}
	
		double val=crr[n];
		val=val-brr[n];

		val=(val*(c-1));
		
		printf("%.9lf\n",val);

	}
}


