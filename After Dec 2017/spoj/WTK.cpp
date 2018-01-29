#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,k,p,i;
	cin>>p;
	while(p--)
	{
		int n;
		cin>>n;
		vector<int> vec;
		for(i=1;i<=n;i++)
		vec.push_back(i);
		
		t=0;k=1;
		while(vec.size()!=1)
		{
			if(t>=vec.size())
			t=t%vec.size();
			vec.erase(vec.begin()+t);
		
			t=t+k;
			k++;
		}
		cout<<vec[0]<<endl;
	}
}
