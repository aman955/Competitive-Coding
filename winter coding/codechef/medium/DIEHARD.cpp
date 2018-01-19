#include<iostream>
using namespace std;

int dp[1001][1001]={};


int valu(int h,int a,int t)
{
	if(h<=0||a<=0)
	return 0;
	if(dp[h][a])
	return dp[h][a];
	if(t==1)
	{
		return max(valu(h-20,a+5,3)+1,valu(h-5,a-10,2)+1);
	}
	else if(t==2)
	{
		return max(valu(h-20,a+5,3)+1,valu(h+3,a+2,1)+1);
	}
	else
	{
		return max(valu(h+3,a+2,1)+1,valu(h-5,a-10,2)+1);
	}
	
}

int main()
{
	dp[0][0]=0;
	int h,a,t;
	cin>>t;
	while(t--)
	{
	for(h=0;h<=1000;h++)
	{
		for(a=0;a<=1000;a++)
		dp[h][a]=max(valu(h,a,1),max(valu(h,a,2),valu(h,a,3)));
	}
	cin>>h>>a;
	cout<<dp[h][a]-1<<endl;
 }
	//cout<<max(valu(h,a,1),max(valu(h,a,2),valu(h,a,3)));
}
