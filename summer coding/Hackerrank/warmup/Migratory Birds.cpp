#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,i,x;
    cin>>t;
    int arr[6]={};
    while(t--)
    {
      cin>>x;
      arr[x]++;
    }
    int mini;
    for(i=1;i<=4;i++)
      {
        mini=max(arr[i],arr[i+1]);
    }
    
    for(i=1;i<=5;i++)
        {
        if(mini==arr[i])
            {
            cout<<i;
            break;
        }
    }
    return 0;
}
