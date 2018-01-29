#include<bits/stdc++.h>
using namespace std;



int main()
{
	int t,i;
	cin>>t;
	while(t--)
	{
	    map<string,int> mp;
		int n;
		scanf("%d\n", &n);
		string str;
		for(i=0;i<n;i++)
		{
			getline(cin,str);
			mp[(string)str]++;
		}
		map<string,int>::iterator it;
		for(it=mp.begin();it!=mp.end();it++)
		{
			cout<< it->first<<" "<<it->second<<endl;
		}
		cout<<endl<<endl;
	}
}
