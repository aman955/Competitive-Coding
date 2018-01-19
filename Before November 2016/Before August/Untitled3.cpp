#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int m,n,k,p;
cin>>k;

   for(p=0;p<k;p++)
   {	cin>>m>>n;
	
   int a[m][n],b[m][n],c[m][n];
   int i,j;
   
   for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
   	{
   		cin>>a[i][j];
	   }
   }
      for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
   	{
   		cin>>b[i][j];
	   }
   }
   for(i=0;i<m;i++)
   {
   	for(j=0;j<n;j++)
   	{
   		c[i][j]=a[i][j]+b[i][j];
   		cout<<c[i][j]<" ";
   	}
   	cout<<endl;
   }
}
return 0;
}
   		
   
   
   

