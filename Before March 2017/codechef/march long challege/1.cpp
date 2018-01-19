#include<iostream>
#include<set>
#define INF 100000000
using namespace std;

int main()
{
	int t,i,x,y;
	cin>>t;
	int n;
	while(t--)
	{
		int k=1;
		cin>>n;
		long sum1=0,sum2=0;
		int x[n+1],y[n+1];
		for(i=1;i<=n;i++)
		{
			cin>>x[i];
		}
		for(i=1;i<=n;i++)
		{
			cin>>y[i];
		}
		for(i=1;i<=n;i++)
		{
			if(i%2==0)
			sum1=sum1+x[i];
			else
			sum1=sum1+y[i];
			
			if(i%2==1)
			sum2=sum2+x[i];
			else
			sum2=sum2+y[i];
      }
      cout<<min(sum1,sum2)<<endl;
  }
}
