#include<iostream>
using namespace std;

int main()
{
	int time=0,j1,j2;
	cin>>j1>>j2;
	if((j1==0&&j2==0)||(j1==1&&j2==1)||(j1==0&&j2==1)||(j1==1&&j2==0))
{	cout<<0;
	return 0;
}
	
	while((j1!=0||j2!=0)&&(j1!=1||j2!=1)&&(j1!=0||j2!=1)&&(j1!=1||j2!=0))
	{
		if(j1>j2)
		{
			j2=j2+1;
			j1=j1-2;
		}
		else
		{
			j2=j2-2;
			j1=j1+1;
		}
		time++;
	}
	
	cout<<time-1;
}
