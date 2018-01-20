#include<iostream>
using namespace std;

int main()
{
	int d1,m1,y1,d2,m2,y2;
	cin>>d1>>m1>>y1>>d2>>m2>>y2;
	
	if(m1==m2&&y1==y2)
	{
		if(d1>d2)
		{
		cout<<(d1-d2)*15;
	}
		else
		cout<<"0";
		return 0;
	}
	if(y1<y2)
	{
		cout<<"0";
		return 0;
	}
	if(m1<m2&&y1==y2)
	{
		cout<<"0";
		return 0;
	}
	
	if(y1>=y2)
	{
		cout<<((y1-y2)*12+(m1-m2))*500;
		return 0;
	}
	
	
}
