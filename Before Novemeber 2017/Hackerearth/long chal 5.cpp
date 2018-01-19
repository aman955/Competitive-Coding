#include<iostream>
#define mod 1000000007
using namespace std;

 
int main(){
 
    int t,n,m,i,j;
    cin>>t;
    while(t--)
	{
      
       cin>>n>>m;
        long long com[m][4],arr[n]={};
      
        for(i=0;i<m;i++){
            scanf("%lld %lld %lld",&com[i][0],&com[i][1],&com[i][2]);
            com[i][3]=1;
        }
        for(i=m-1;i>=0;i--)
		{
            if(com[i][0]==1)
			{
                for(j=com[i][1]-1;j<com[i][2];j++)
                    arr[j]=(arr[j]+com[i][3])%mod;
            }
 
            else
			{
                for(j=com[i][1]-1;j<com[i][2];j++)
                    com[j][3]=(com[j][3]+com[i][3])%mod;
            }
        }
        for(i=0;i<n;i++)
         cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}
