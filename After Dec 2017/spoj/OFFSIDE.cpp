#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a=1,d=1;
	while(1)
	{
		cin>>a>>d;
		if(a==0&&d==0)
		return 0;
		int arr[a],brr[d];
		for(int i=0;i<a;i++)cin>>arr[i];
		for(int i=0;i<d;i++)cin>>brr[i];
		sort(arr,arr+a);sort(brr,brr+d);
		if(arr[0]<brr[1])
		cout<<"Y"<<endl;
		else
		cout<<"N"<<endl;
	}
}
