#include<iostream>
using namespace std;

int main()
{
	int h[26],i,ans;
	for(i=0;i<26;i++)
	{
		cin>>h[i];
	}
	string str;
	cin>>str;
    int max=str[0],l=str.length();
    for(i=0;i<l;i++)
    {
    	if(h[str[i]-97]>h[max-97])
    	max=str[i];
	}
	
	cout<<l*h[max-97];
}
