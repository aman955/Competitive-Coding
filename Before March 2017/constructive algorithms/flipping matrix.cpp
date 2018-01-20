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
	int n,t,p;
	cin>>t;
	while(t--)
	{
		int k=1,i,j,temp1,temp2,temp3;
		long sum=0;
	cin>>n;
	int mat[2*n+1][2*n+1];
	for(i=1;i<2*n+1;i++)
	{
		for(j=1;j<2*n+1;j++)
		cin>>mat[i][j];
	}
	p=n;
	while(p!=0)
	{
		for(i=k;i<=n+1-k;i++)
		{
			for(j=k;j<=n+1-k;j++)
			{
				temp1=max(mat[i][j],mat[i][2*n+1-j]);
				temp2=max(mat[2*n+1-i][j],mat[2*n+1-i][2*n+1-j]);
				temp3=max(temp1,temp2);
				sum=sum+temp3;
			}
		}
		k++;
		p--;
	}
	cout<<sum<<endl;
}
}
