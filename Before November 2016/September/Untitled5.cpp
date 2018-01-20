#inlcude<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	int n;
	while(t--)
	{
		cin>>n
		int a[n+1],b[n+1];
		
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
			b[i]=i;
		}
		int j=1,k=1,c=1,temp;
		for(i=1;i<=n;i++)
		{
			j=c;
			while(b[j]!=a[i])
			{
				j++;
			}
			temp=b[i];
			b[i]=b[j];
			b[j]=temp;
			c++;
			
		}
		
	}
}
