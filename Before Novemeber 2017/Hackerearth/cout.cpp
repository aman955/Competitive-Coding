
#include<bits/stdc++.h>


int main()
{
	int t;
	std::cin>>t;
	while(t--)
	{
		long int n,count,f;
		std::cin>>n;
		std::queue< std::pair<long, long> >q;
		std::unordered_set<long long > s;
		s.insert(n);
		q.push(make_pair(n,0));
		while(!q.empty())
		{
			pair<long, long> p=q.front();
			long long f=p.first;
			q.pop();
			if(f==1)
			{
				count=p.second;
				break;
			}
			if(f%3==0&&(s.find(f)!=s.end()))
			{
				q.push(make_pair(f/3,p.second+1));
				s.push(f/3);
			}
			if(f%2==0&&(s.find(f)!=s.end()))
			{
				q.push(make_pair(f/2,p.second+1));
				s.push(f/2);
			}	
				q.push(make_pair(f-1,p.second+1));
		}
		cout<<count<<endl;
		
	}
}
