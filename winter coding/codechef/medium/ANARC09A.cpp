#include<bits/stdc++.h>
using namespace std;

int main()
{
	while(1)
	{
		string str;
		cin>>str;
		if(str[0]=='-')
		break;
		long long ans=0,i;
		int n=str.length();
		for(i=0;i<n/2;i++)
		{
			if(str[n/2+i]==str[n/2-i-1])
			{
				ans+=1;
			}
			else if(str[n/2+i]=='{')
			{
				ans+=2;
			}
		}
		cout<<ans<<endl;
	}
}
