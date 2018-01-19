#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int t,c,i;
	cin>>t;
	long sum=0;
	string str;
	while(t--)
	{
		cin>>str;
		for(i=0;i<(str.length())/2;i++)
		{
			c=abs(str[i]-str[str.length()-i-1]);
			sum=sum+c;
		}
		cout<<sum<<endl;
	}
}
