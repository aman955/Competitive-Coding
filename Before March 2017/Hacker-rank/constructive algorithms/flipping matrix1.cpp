#include<iostream>
using namespace std;
int max(int x,int y)
{
	if(x>y)
	return x;
	else 
	return y;
}

int main()
{
	int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int mat[2*n+1][2*n+1],i,j,p=n,k=1,temp1,temp2,temp;
		long sum=0;
		
			for(i=1;i<2*n+1;i++)
	{
		for(j=1;j<2*n+1;j++)
		cin>>mat[i][j];
	}
		while(p--)
		{
			for(j=k;j<=n;j++)
			{
				i=k;
				temp1=max(mat[i][j],mat[i][2*n+1-j]);
				temp2=max(mat[2*n+1-i][j],mat[2*n+1-i][2*n+1-j]);
				temp=max(temp1,temp2);
				sum=sum+temp;
			}
			
			for(i=k+1;i<=n;i++)
			{
				j=k;
				temp1=max(mat[i][j],mat[2*n+1-i][j]);
				temp2=max(mat[i][2*n+1-j],mat[2*n+1-i][2*n+1-j]);
				temp=max(temp1,temp2);
				sum=sum+temp;
			}
			k++;
		}
		cout<<sum<<endl;
	}
	}
