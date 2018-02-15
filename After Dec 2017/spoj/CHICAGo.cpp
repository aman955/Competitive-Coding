#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,k,e;
	while(1)
	{	
		scanf("%d",&n);
		if(n==0)
		return 0;
		scanf("%d",&e);
		double arr[n][n];
		double w;
		int x,y;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
			arr[i][j]=0.0;
		    }
	    }
		for(i=1;i<=e;i++)
		{
			scanf("%d%d%lf",&x,&y,&w);
			arr[x-1][y-1]=-w;
			arr[y-1][x-1]=-w;
		   }
		  
	    
	    
	    for(k=0;k<n;k++)
	    {
	    	for(i=0;i<n;i++)
	    	{
	    		for(j=0;j<n;j++)
	    		{
	    			arr[i][j]=min(arr[i][j],-abs(arr[i][k]*arr[k][j])/100.00);
				}
			}
		}
		
		printf("%.6f percent\n",abs(arr[0][n-1]));
	}
}
