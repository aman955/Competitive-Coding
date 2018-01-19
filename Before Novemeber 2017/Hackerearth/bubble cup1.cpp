#include<iostream>
#include<cmath>
#include<stack>
using namespace std;

int main()
{
	int n;
	cin>>n;
string str;
cin>>str;
	long long sum=0,i,j,temp;
	stack<int> s;
	
	for(i=0;i<n;i++)
	{
	sum=sum+(str[i]-'0');
   }

if(n==1)
{
	cout<<str[0]<<endl;
	cout<<str[0]<<endl;
	cout<<str[0]<<endl;
	return 0;
}

	for(i=0;i<n-1;i++)
	{
		cout<<str[i]<<"+";
	}
	cout<<str[n-1]<<endl;
long long c,newsum=0;
if(sum/10==0)
{
	cout<<sum<<endl;
	cout<<sum<<endl;
	return 0;
}
else
{
	temp=sum;
	while(temp!=0)
	{
		c=temp%10;
		temp=temp/10;
		s.push(c);
	}
	while(s.size()!=1)
	{
		c=s.top();
		cout<<c<<"+";
		newsum=newsum+c;
		s.pop();
	}
	newsum+=s.top();
	cout<<s.top()<<endl;
	s.pop();
}
sum=newsum;
if(sum/10==0)
{
	cout<<sum<<endl;

	return 0;
}
else
{
	temp=sum;
	while(temp!=0)
	{
		c=temp%10;
		temp=temp/10;
		s.push(c);
	}
	while(s.size()!=1)
	{
		c=s.top();
		cout<<c<<"+";
		newsum=newsum+c;
		s.pop();
	}
	cout<<s.top()<<endl;
	s.pop();
}

	
}
