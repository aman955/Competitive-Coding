#include<iostream>
#include<climits>
using namespace std;

int main()
{
int t;cin>>t;
while(t--)
{
    int m,n,j;
    cin>>m>>n;
    int a[n];
    for(int i=0;i<n;i++)
     {

     cin>>a[i];
 }
 j=0;
 for(int i=0;i<n;i++)
     {
j=0;
     while(a[j]+a[i]!=m&&j<i)++j;// searching of j where a[j]+a[i]=m

     if(a[i]+a[j]==m&&i>j)
     {

     cout<<j+1<<" "<<i+1<<endl;
         break;
     }
    } 
 }

return 0;
}
