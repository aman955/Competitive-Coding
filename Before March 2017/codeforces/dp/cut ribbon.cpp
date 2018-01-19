#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n,a,b,c,i;
	cin>>n;
	vector<int> vec(3);
	
	cin>>vec[0]>>vec[1]>>vec[2];
	sort(vec.begin(),vec.end());
	a=vec[0];b=vec[1];c=vec[2];
	if(a==b&&b==c)
	{
	cout<<n/a;
	return 0;
}
	
	long long arr[4][n+1]={0};
	
		for(i=1;i<=3;i++)
	{
		for(int j=1;j<=n;j++)
		{
			arr[i][j]=0;
		}
	}
	
	for(i=1;i<n+1;i++)
	{
		if(i%a==0)
		{
	    arr[1][i]=i/a;
		arr[2][i]=arr[1][i];
		arr[3][i]=arr[1][i];
	    }
	    
	}
	
	for(i=1;i<n+1-b;i++)
	{
			if(!arr[2][i+b])
			{
			if(arr[2][i+b]%b==0)
				{
				arr[2][i+b]=max(arr[1][i]+1,arr[2][i+b]/i);
				arr[3][i+b]=arr[2][i+b];
			}
			else
			{
			arr[2][i+b]=arr[1][i]+1;
			arr[3][i+b]=arr[1][i]+1;
			}
		}
		
	}
	
	for(i=1;i<n+1-c;i++)
	{
			if(!arr[3][i+c])
			{
				if(arr[3][i+c]%c==0)
				{
				arr[3][i+c]=max(arr[2][i]+1,arr[3][i+c]/i);
			    }
			    else
				arr[3][i+c]=arr[2][i]+1;
			}
		
	}
	
	for(i=1;i<n+1-c;i++)
	{
		
			if(!arr[3][i+c])
			{
				if(arr[3][i+c]%c==0)
				{
				arr[3][i+c]=max(arr[1][i]+1,arr[3][i+c]/i);
			    }
			    else
				arr[3][i+c]=arr[1][i]+1;
			}
		
	}
cout<<arr[3][n];

for(i=1;i<=3;i++)
{
	for(int j=1;j<=n;j++)
	cout<<arr[i][j]<<" ";
	cout<<endl;
}

}
