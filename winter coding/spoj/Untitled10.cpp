#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
int n;
cin>>n;
int x;
cin>>x;
int arr[n],fin=0;
for(int i=0;i<n;i++)cin>>arr[i];
int l=0,r=n-1;
	 while (l <= r)
  {


    int m = l + (r-l)/2;
 
    // Check if x is present at mid
  
    // If x greater, ignore left half  
    if (arr[m] <= x) 
       {
		 l = m + 1; 
        fin=m+1;
    }
    else
         r = m - 1; 
  }
  cout<<n-fin<<endl;
}
}
