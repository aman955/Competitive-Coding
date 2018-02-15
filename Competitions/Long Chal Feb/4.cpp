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
		int i,j,temp;
		int n=str.length();
		int arr[26]={};
		vector<int> vec[26];
		stack<int> s;
		
		for(i=0;i<n;i++)
		{
		arr[str[i]-'a']++;
		vec[str[i]-'a'].push_back(i);
	    }
		int counti=0;
		if(!(n&1))
		{
			for(i=0;i<26;i++)
			{
				if(arr[i]%2==0)continue;
				else
				{
					cout<<"-1"<<endl;
					goto aman;
				}
			}
			for(i=0;i<26;i++)
			{
				if(vec[i].size())
				{
					for(j=0;j<vec[i].size()/2;j++)
					{
						cout<<vec[i][j]+1<<" ";
						
					}
					for(j=vec[i].size()-1;j>=vec[i].size()/2;j--)
					{
						s.push(vec[i][j]+1);
					}
				}
			}
			while(!s.empty())
			{
				int c=s.top();
				cout<<c<<" ";
				s.pop();
			}
			cout<<endl;
			
		}
		else
		{
			for(i=0;i<26;i++)
			{
				if(arr[i]%2==0)continue;
				else
				{
					counti++;
				}
			}
			if(counti>1)
			{
				cout<<"-1"<<endl;
				goto aman;
			}
			
			for(i=0;i<26;i++)
			{
				
				if(vec[i].size())
				{
					
					if((vec[i].size())%2==1)
					{
						for(j=0;j<vec[i].size()/2;j++)
					{
						cout<<vec[i][j]+1<<" ";
						
					}
					
				   temp=(vec[i][j])+1;
					
					
					for(j=vec[i].size()-1;j>=vec[i].size()/2+1;j--)
					{
						s.push(vec[i][j]+1);
					}	
						
						goto popo;
					}
				
					
					for(j=0;j<vec[i].size()/2;j++)
					{
						cout<<vec[i][j]+1<<" ";
						
					}
					
					for(j=vec[i].size()-1;j>=vec[i].size()/2;j--)
					{
						s.push(vec[i][j]+1);
					}
				}
				popo : ;
			}
			s.push(temp);
			while(!s.empty())
			{
				int c=s.top();
				cout<<c<<" ";
				s.pop();
			}
			cout<<endl;
			
			
			
		}
		aman: ;
	}
}
