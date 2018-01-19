#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t=1;
	while(1)
	{
		string str;
		vector<char> vec;
		cin>>str;
		if(str[0]=='-')
		break;
		long long ans=0,i,j;
		int n=str.length();
       for(i=0;i<n;i++)
       {
       	if(str[i]=='{')
       	{
       	for(j=i+1;j<n;j++)
       	{
       		if(str[i]=='{'&&str[j]=='}')
       		{
			   str[i]='.';
			   str[j]='.';
		    }
		}
	    }
       }
		for(i=0;i<n;i++)
		if(str[i]!='.')
		vec.push_back(str[i]);
		
		for(i=0;i<vec.size();i+=2)
		{
			if(vec[i]=='{'&&vec[i+1]=='{')
			ans++;
			else if(vec[i]=='}'&&vec[i+1]=='{')
			ans+=2;
			else if(vec[i]=='}'&&vec[i+1]=='}')
			{
				ans+=1;
			}
		}
		cout<<t<<". "<<ans<<endl;
		t++;
	}
}
