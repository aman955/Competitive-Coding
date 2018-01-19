#include<iostream>
using namespace std;

int main()
{
	int t,count=0;
	cin>>t;
	while(t--)
	{
		long long x1,y1,x2,y2,x3,y3;
		long long d1,d2,d3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		d1=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		d2=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
		d3=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
		if(d1==d2+d3||d2==d1+d3||d3==d1+d2)
		{
			count++;
		}
	}
	cout<<count;
}
