#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t; 
  long n, d, arr[100000];
   long average, total;
  cin >> t;
  while(t--)
   {
    cin >> n >> d; 
	total = 0; 
	average = 0;
    for(int i = 0; i < n; i++) 
	{
      cin >> arr[i];
      average += arr[i];
    }
    average /= n;
    for(int i = d; i < n; i++) {
      if(abs(average-arr[i]) == abs(average-arr[i-d])+abs(average-arr[i+d]) && i < n-d && arr[i] != average)
	   {
        total += abs(average-arr[i]);
		 arr[i] = average; 
		 arr[i-d] = average;
		  arr[i+d] = average;
      }
      else if(i >= n-d && abs(average-arr[i]) == abs(average-arr[i-d]) && arr[i] != average) 
	  {
      	total += abs(average-arr[i]);
		   arr[i] = average;
		    arr[i-d] = average;
      }
      else 
	  {
      	if(arr[i] != average) 
		  {
        	total = -1;
			 break;
      	}
    }
  }
  cout << total <<endl;
}
}
