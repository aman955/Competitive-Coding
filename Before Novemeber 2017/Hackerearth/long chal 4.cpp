#include <bits/stdc++.h>
using namespace std;

 
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
		long long n,q,i,j,value,pivot;
		cin>>n>>q;
		vector<vector<int> > arr(n);
		
		for(i=0;i<n;i++)
		{
			vector<int> v(n,-1);
			arr[i]=v;
		}
 
		int flag=0;
 
		while(q--)
		{
			cin>>i>>j>>value;
			arr[i-1][j-1]=value;
		}
	
		for(i=0;i<n;i++)
		{
			if(arr[i][i]!=-1&&arr[i][i]!=0)
			{
				flag=1;
				break;
			}
		}
 
	
		if(flag==0)
		{
			for(i=0;i<n;i++)
			{
				for(j=i+1;j<n;j++)
				{
					if(arr[i][j]!=-1&&arr[j][i]!=-1&&arr[i][j]!=arr[j][i])
					{
						flag=1;
						break;
					}
				}
			}
		}
 
		if(flag==0)
		{
			for(pivot=1;pivot<n-1;pivot++){
				for(i=0,j=pivot;j<n-1;j++,i++)
				{
 
					if(arr[i][j]!=-1&&arr[i+1][j+1]!=-1)
					{
					if(arr[i][j+1]!=-1 &&arr[i][j]+arr[i+1][j+1]!=arr[i][j+1])
					{
						flag=1;
						break;
					}
					else if(arr[i][j+1]==-1)
						arr[i][j+1]=arr[i][j]+arr[i+1][j+1];
					}	
				}
			}
		}
 
		if(flag==0)
		{
			for(i=0;i<n;i++)
			{
				for(j=i+1;j<n;j++)
				{
					if(arr[j][i]!=-1&&arr[i][j]!=arr[j][i])
					{
						flag=1;
						break;
					}
				}
			}
		}
		if(flag==1)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;
	}

}
