#include<iostream>
using namespace std;
#define max 1000000


int leftreach[max][2],rightreach[max][2];

int main()
{
	int n,i,j,k,type,q;
	cin>>n;
	int arr[n];
	for(i=1;i<=n-1;i++)
	{
		cin>>arr[i];
	}
	for(i=1;i<=n;i++)
	{
		if(arr[i])
		{
			leftreach[i][1]=leftreach[i-1][1]+1;
			leftreach[i][0]=1;
		}
		else
		{
			leftreach[i][0]=leftreach[i-1][0]+1;
			leftreach[i][1]=1;
		}
	}
	for(i=n;i>=1;i--)
	{
		if(arr[i])
		{
			rightreach[i][0]=rightreach[i+1][0]+1;
			rightreach[i][1]=1;
		}
		else
		{
			rightreach[i][1]=rightreach[i+1][1]+1;
			rightreach[i][0]=1;
		}
	}
	
	type=0;
	
	cin>>q;
	while(q--)
	{
		char c;
		cin>>c;
		if(c=='U')
		{
			type^=1;
		}
		else
		{
			cin>>j;
			cout<<leftreach[j][type]+rightreach[j][type]-1<<endl;
		}
	}
	
	
	
}
