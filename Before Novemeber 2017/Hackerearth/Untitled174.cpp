#include<bits/stdc++.h>

using namespace std;

int arr[1000005];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(arr,0,sizeof(arr));
		vector<long long int> vec,left,right;
		
		long long int n,a,i,j,lefti,righti,temp1,temp2;
		cin>>n;
		for(i=1;i<=n;i++)
		{
			cin>>arr[i];
		}
		right.push_back(arr[1]);
		int x=2;
		while(pow(2,x)!=n)
		{
			righti=0;
			lefti=0;
			
			for(j=pow(2,x-1);j<pow(2,x);j++)
			{
				if(arr[j])
				{
					temp1=arr[j];
					lefti=j;
					break;
				}
				
			}
			for(j=pow(2,x)-1;j>=pow(2,x-1);j--)
			{
				if(arr[j])
				{
					temp2=arr[j];
					righti=j;
					break;
				}
			}
			if(lefti==righti&&righti!=0&&lefti!=0)
			{
				right.push_back(temp2);
			}
			else if(lefti!=0&&righti!=0)
			{
				right.push_back(temp2);
				left.push_back(temp1);
			}
			x++;
		}
		for(i=0;i<right.size();i++)
		{
			cout<<right[i]<<endl;
		}
		for(i=0;i<left.size();i++)
		{
			cout<<left[i]<<endl;
		}
		cout<<endl;
	}
}
