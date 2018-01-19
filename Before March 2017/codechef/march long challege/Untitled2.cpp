#include<bits/stdc++.h>
using namespace std;

int main()
{
	set<int> s;
	s.insert(5);
	s.insert(6);
	s.insert(7);
	s.insert(8);
	cout<<*(s.rbegin());
}
