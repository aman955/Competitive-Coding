#include<iostream>
#include<set>
using namespace std;

int main()
{
	int i,j,n;
	string str;
	cin>>str;
	n=str.length();
		set<int> s;
	int count=1;
	for(i=0;i<n-1;i++)
	{
		if(str[i]==str[i+1])
		{
			count++;
		}
		else
		{
			for(j=1;j<=count;j++)
			{
				s.insert((str[i]-96)*j);
			}
		count=1;
		
	    }
	}
	if(str[n-2]!=str[n-1])
	{
		s.insert((str[n-1]-96));
	}
	int q,x;
	cin>>q;

	while(q--)
	{
		cin>>x;
		if(s.find(x)!=s.end())
		{
			cout<<"Yes"<<endl;
		}
		else
		cout<<"No"<<endl;
	}
}
