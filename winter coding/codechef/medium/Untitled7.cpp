#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i;
	vector<int> b;
	for(i=1;i<10;i++)
	b.push_back(i);
	b.erase(b.begin());
		for(i=0;i<b.size();i++)
    cout<<b[i]<<endl;
	
}
