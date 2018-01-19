#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		string str;
		cin>>str;
		int count=0;
		set<int> s;
		for(i=0;i<=n-2;i++)
		{
			if(str[i]==str[i+1])
			{
				count++;
			}
			else
			{
				if(count>=2)
				s.insert(count);
			 count=0;
		     }
		}
		if(str[n-1]==str[n-2])
		{
			s.insert(count);
		}
		while(k--)
		{
			int x=s.rbegin();
			if(x%2==1)
			{
				s.insert()
			}
			
		}
	}
}
