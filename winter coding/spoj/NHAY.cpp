#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n;

	while(cin>>n)
	{
	string str,pat;
	cin>>pat>>str;
	int lps[n]={},m=str.length(),i,j,k;
	if(m<n)
	{
		cout<<endl;
		continue;
	}
	lps[0]=0;
	k=0;
	i=1;
	while(i<n)
	{
		if(pat[i	]==pat[k])
		{
			k++;
			lps[i]=k;
			i++;
		}
		else
		{
			if(k!=0)
			{
				k=lps[k-1];
			}
			else
			{
				lps[i]=0;
				i++;
			}
		}
	}
	i=0;j=0;
	while(i<m)
	{
		if(pat[j]==str[i])
		{
			i++;
			j++;
		}
		if(j==n)
		{
			cout<<i-j<<endl;
			j=lps[j-1];
		}
		else if(i<m&&pat[j]!=str[i]) 
		{
			if(j!=0)
			{
				j=lps[j-1];
			}
			else
			{
				i++;
			}
		}
	}
}
}
