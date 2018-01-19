#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,x,c,d=0;
	n=8;
	while(n!=0)
	{
	cin>>n;
	if(n==0)
	continue;
	queue<int> q;
	stack<int> s;
	for(i=0;i<n;i++)
	{
		cin>>x;
		q.push(x);
	}
	int count=1;
	while(!q.empty())
	{
		c=q.front();
		if(!s.empty())
	    d=s.top();
	    if(d==count)
	    {
	    	s.pop();
	    	count++;
		}
		else
          {
          	if(c==count)
          	{
          		q.pop();
          		count++;
		    }
		    else
		    {
		    	s.push(q.front());
		    	q.pop();
			}
				  }		
	}
	while(!s.empty())
	{
		if(s.top()==count)
		{
			count++;
			s.pop();
		}
		else
		{
			break;
		}
	}
	if(s.empty())
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;

}
}
