#include<iostream>
#include<set>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		set<int> s,mx;
		set<int>::iterator it,ct;
		int x;
		while(n--)
		{
			cin>>x;
			s.insert(x);
		}
		it=s.begin();
		it++;
		for(;it!=s.end();it++)
		{
			ct=it;
			ct++;
			mx.insert(*(ct)-*it);
		}
		int q;
		cin>>q;
		int cas;
		while(q--)
		{
			cin>>cas;
			if(cas==1)
			{
				
			}
		}
	}
}
