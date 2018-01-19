#include<iostream>
#include<set>
using namespace std;

int mod[10005]={};


int main()
{
	int i,n,m,j,k,x;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		mod[x%m]++;
	}

	long long ans=0,l;
	for(i=0;i<m;i++)
	{
		for(j=i;j<m;j++)
		{
			if(i+j<=m)
				k=(m-(i+j))%m;
				else
				{
					k=(m-(i+j)%m);
				}
				if(k>=j)
				{
				
					if(i==j&&j==k&&mod[i]>=3)
					{
						l=mod[i]*(mod[i]-1)*(mod[i]-2);
						l=l/6;
						ans=ans+l;
					}
					else if(i==j&&mod[i]>=2&&mod[k]!=0)
					{
						l=mod[i]*(mod[i]-1);
						l=l/2;
						l=l*mod[k];
						ans=ans+l;
					}
					else if(k==j&&mod[j]>=2&&mod[i]!=0)
					{
						l=mod[j]*(mod[j]-1);
						l=l/2;
						l=l*mod[i];
						ans=ans+l;
					}
					else if(i==k&&mod[i]>=2&&mod[j]!=0)
					{
						l=mod[i]*(mod[i]-1);
						l=l/2;
						l=l*mod[j];
						ans=ans+l;
					}
					else if(i!=j &&j!=k)
					{
						l=mod[i]*mod[j]*mod[k];
						ans=ans+l;
					}
					
				}
				
				
			
		
		}
	}
	
	cout<<ans<<endl;
}
