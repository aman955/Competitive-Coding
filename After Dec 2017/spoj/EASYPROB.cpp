#include<bits/stdc++.h>
using namespace std;

void recur(int x)
{
	if(x==0)
	{
		cout<<"0";
	}
    else if(x==1)
    {
    	cout<<"2(0)";
	}
	else if(x==2)
	{
		cout<<"2";
	}
	else if(x==3)
    {
    	cout<<"2+2(0)";
	}

	else
	{
			stack<int> s;
			int c;
	int count=0,p=1,last;
	while(x!=0)
	{
		c=x%2;
	    if(p&&c)
	    {
	    	last=count;
	    	p=0;
		}
		x=x/2;
		s.push(c);
		count++;	
	}
	count--;
	while(!s.empty())
	{
		if(s.top())
		{
			if(count==1)
			cout<<2;
			else
			{
		cout<<"2(";
		recur(count);
		cout<<")";
	         }
		if(count!=last)
		cout<<"+";
	}
		s.pop();
	   
		count--;
		
	}
	}
	
	
	
}

int main()
{
	int x,c;
	/*stack<int> s;
	int count=0;
	while(x!=0)
	{
		c=x%2;
		x=x/2;
		s.push(c);
		count++;
		
	}
	count--;
	while(!s.empty())
	{
			if(s.top())
		{
		cout<<"2(";
		recur(count);
		cout<<")";
	}
		s.pop();
		
		count--;
	
	}137, 1315, 73, 136, 255, 1384, 16385
	*/
	recur(137);
	cout<<endl;
    recur(1315);
	cout<<endl;
	recur(73);
	cout<<endl;
	recur(136);
	cout<<endl;
	recur(255);
	cout<<endl;
	recur(1384);
	cout<<endl;
	recur(16385);
	cout<<endl;
	
}
