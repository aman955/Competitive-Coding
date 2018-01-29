#include<bits/stdc++.h>
using namespace std;

long long val[1000001]={};
long long phi[1000001]={};


void euler_totient()
{
	int i,j;
	for(i=1;i<=1000000;i++)
	phi[i]=i;
	
	for(j=2;j<=1000000;j++)
	{
		if(phi[j]==j)
		{
			phi[j]=j-1;
			for(i=j*2;i<=1000000;i+=j)
			{
				phi[i]=(phi[i]/j)*(j-1);
			}
		}
	}
}

int main()
{
	int a,b;
	euler_totient();
    cin>>a>>b;
    for(int i=a;i<=b;i++)cout<<phi[i]<<endl;
    

}
