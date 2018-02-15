#include<bits/stdc++.h>
using namespace std;

int main()
{
int a;
double b;
cin>>a>>b;
double x,y;
double maxi,ans=1000000000000.00;
for(int i=1;i<=a;i++)
{
	cin>>x>>y;
	maxi=(x/y)*b;
	ans=min(ans,maxi);
	}	

	printf("%.9lf\n",ans);
}
