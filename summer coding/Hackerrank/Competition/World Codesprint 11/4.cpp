#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n,up=0,j,min;
		cin>>n;
	char arr[3][n+1];
	arr[1][n]='.';arr[2][n]='.';
	int visited[3][n+1];
	
	for(i=1;i<=n;i++)
	{
		visited[1][i]=0;
		visited[2][i]=0;
	}
	
	for(i=1;i<=n;i++)
	cin>>arr[1][i];
	for(i=1;i<=n;i++)
	cin>>arr[2][i];	
	
	
	i=1;
	while(arr[1][i]!='#'&&i!=n+1)
	{
		i++;
	}
	j=1;
	while(arr[2][j]!='#'&&j!=n+1)
	{
		j++;
	}
	
	if(i<=j)
	{
		up=1;
		min=i;
		visited[1][i]=1;
	}
	else 
	{
	min=j;
	visited[2][j]=1;
     }
	i=min;
	

	
	while(i!=n)
	{

		
		if(up)
		{
		if(arr[2][i]=='#'&&(!visited[2][i]))
		{
			
			up=0;
			visited[2][i]=1;
		}
		else if(arr[1][i+1]=='#'&&!visited[1][i+1])
		{
		
			up=1;
			visited[1][i+1]=1;
			i++;
		}
		else
		{
			
			goto aman;
		}
				
		}
		else
		{
			if(arr[1][i]=='#'&&!visited[1][i])
			{
				up=1;
				visited[1][i]=1;
			}
			else if(arr[2][i+1]=='#'&&!visited[2][i+1])
			{
				up=0;
				visited[2][i+1]=1;
				i++;
			}
			else
		{
			
			goto aman;
		}
			
		}
	}
		
	aman: 
	
		 ;
		 int temp1,temp2;
		 temp1=temp2=i+1;
		 while(arr[1][temp1]!='#'&&temp1!=n+1)
		 {
		 	temp1++;
		 }
		 while(arr[2][temp2]!='#'&&temp2!=n+1)
		 {
		 	temp2++;
		 }
		 
	if(temp1==n+1&&temp2==n+1)
	{
		cout<<"yes"<<endl;
		goto sakshi;
	}
	for(i=1;i<=n;i++)
	{
		visited[1][i]=0;
		visited[2][i]=0;
	}
	
	up=0;
	
	
		i=n;
	while(arr[1][i]!='#'&&i!=0)
	{
		i--;
	}
	j=n;
	while(arr[2][j]!='#'&&j!=0)
	{
		j--;
	}
	
	if(i>=j)
	{
		up=1;
		min=i;
		visited[1][i]=1;
	}
	else 
	{
	min=j;
	visited[2][j]=1;
     }
	i=min;

	
	
		while(i!=1)
	{

		
		if(up)
		{
		if(arr[2][i]=='#'&&(!visited[2][i]))
		{
			
			up=0;
			visited[2][i]=1;
		}
		else if(arr[1][i-1]=='#'&&!visited[1][i-1])
		{
		
			up=1;
			visited[1][i-1]=1;
			i--;
		}
		else
		{
			
			goto rathore;
		}
				
		}
		else
		{
			if(arr[1][i]=='#'&&!visited[1][i])
			{
				up=1;
				visited[1][i]=1;
			}
			else if(arr[2][i-1]=='#'&&!visited[2][i-1])
			{
				up=0;
				visited[2][i-1]=1;
				i--;
			}
			else
		{
			
			goto rathore;
		}
			
		}
	}
	

	rathore: 
	
		 ;
		 int tempu,tempv;
		 tempu=tempv=i-1;
		 while(arr[1][tempu]!='#'&&tempu!=0)
		 {
		 	tempu--;
		 }
		 while(arr[2][tempv]!='#'&&tempv!=0)
		 {
		 	tempv--;
		 }
		 
	if(tempu==0&&tempv==0)
	{
		cout<<"yes"<<endl;
		goto sakshi;
	}
	cout<<"no"<<endl;
	
	sakshi: ;
		
	}
}
