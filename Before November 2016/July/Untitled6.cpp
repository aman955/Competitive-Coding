#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;


int main()
{
	long long n,k,i;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		string s;
		for(i=0;i<n;i++)
		s[i]=i+1;
		for(i=0;i<n-1;i++)
		{
			if(abs(s[i]-s[i+1])==k)
			continue;
			else
			{
				next_permutation(s.begin(),s.end());
				i=0;
				
			}
		}
		if(i==n)
		cout<<s<<endl;
		else
		cout<<"-1"<<endl;
	}
}
