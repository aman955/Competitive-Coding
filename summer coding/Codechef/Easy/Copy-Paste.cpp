#include<iostream>
#include<set>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		set<int> s;
		int n,x;
		cin>>n;
		while(n--)
		{
			cin>>x;
			s.insert(x);
		}
		cout<<s.size()<<endl;
	}
	
}
