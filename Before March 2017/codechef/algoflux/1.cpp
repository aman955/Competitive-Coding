#include<iostream>
using namespace std;

int main()
{
	string str;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>str;
		long max=0,points=1;
	long n=str.length();
	for(long i=0;i<n-1;i++)
	{
		if(str[i]=='1'&&str[i+1]=='1')
		{
			points++;
			if(points>max)
			{
				max=points;
			}
		}
		else points=1;
	}
	cout<<max<<endl;
}
}
