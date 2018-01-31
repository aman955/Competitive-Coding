#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
	int t,i;
	cin>>t;

int arr[3]={};

	char a[3];
	for(i=1;i<=t;i++)
	{
		scanf("%s",&a);
		if(a[0]=='1'&&a[2]=='4')
		arr[0]++;
		else if(a[1]=='1'&&a[2]=='2')
		arr[1]++;
		else
		{
			arr[2]++;
		}
	}

	int ans=0;
	ans=ans+arr[1]/2;
arr[1]=arr[1]%2;
if(arr[1])
{
	if(arr[0]>=2)
	{
		arr[0]-=2;
	}
		ans++;
}

if(arr[0])
{
	ans=ans+arr[2];
	arr[0]=arr[0]-min(arr[0],arr[2]);
}

if(arr[0])
{
	if(arr[0]%4==0)
	ans+=(arr[0])/4;
	else
	ans+=(arr[0])/4+1;
}
printf("%d\n",ans);

}
}

