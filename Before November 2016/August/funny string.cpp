#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;


int main()
{
	int t;
	cin>>t;
	string str,temp;
	while(t--)
	{
		cin>>str;
		temp=str;
       reverse(str.begin(),str.end());
		for(int i=1;i<str.length();i++)
		{
			if(abs(temp[i]-temp[i-1])!=abs(str[i]-str[i-1]))
			{
				cout<<"Not Funny"<<endl;
				goto aman;
			}
		}
		cout<<"Funny"<<endl;
		aman: ;
		
		
		
	}
}
