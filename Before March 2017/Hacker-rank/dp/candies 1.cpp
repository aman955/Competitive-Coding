#include<bits/stdc++.h>
#include<iostream>
using namespace std;

long candy[100005],rating[100005];
int main()
{
	long n,i;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
	candy[i]=1;
	cin>>rating[i];
    }
    
  for(int i = 1; i < n; i++)
 {
  if(rating[i] > rating[i-1])
  {
   candy[i] = candy[i-1]+1;
  }
 }

 for(int i = n-2; i >= 0; i--)
 {
  if(rating[i] > rating[i+1])
  {
   candy[i] = max(candy[i], candy[i+1]+1);
  }
  
 }
		long sum=0;
	for(i=0;i<n;i++)
	{
		sum+=candy[i];
	}
	cout<<sum;
}

	
	


