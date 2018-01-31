#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	string str;
	while(t--)
	{
		cin>>str;
		int n=str.length(),p=0,i;
		for(i=0;i<n/2;i++)
		{
			if(str[i]!=str[n-1-i])
			{
				cout<<"NO"<<endl;
				p=1;
				break;
			}
		}
		if(p==0)
		cout<<"YES"<<endl;
	}
}
