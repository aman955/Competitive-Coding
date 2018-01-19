#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	long sum;
	string t;
	int n,q,i;
	cin>>n;
	string s[n];
	for(i=0;i<n;i++)
	cin>>s[i];
	sort(s,s+n);
	cin>>q;
	while(q--)
	{
		cin>>t;
		sum=0;
		for(i=0;i<t.length();i++)
		{
			cout<<t[i]<<endl;
			sum=sum+(t[i]-64);
		}
		for(i=0;i<n;i++)
		{
			if(s[i]==t)
			break;
		}
	
		cout<<((i+1)*sum)<<endl;
	}
	
}
