#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int count(int x) {
  vector<int> ret;
  int c = 0;
  while(x) {
    if (x&1) {
    	c++;
    	ret.push_back(1);
    }
    else {
    	ret.push_back(0);
    	c++;
    }
    x>>=1;  
  }
  return c;
}
 
int main()
{
	int one = count(18);
	cout << one << endl;
 
  	return 0;
}
