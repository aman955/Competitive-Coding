#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string str;
	int t,c=0,i,k;
	cin>>t;
	int a[26]={0};
	while(t--)
	{
		cin>>str;
        sort(str.begin(),str.end());
		for(i=0;i<str.length()-1;i++)
		{
            if(str[i]!=str[i+1])
             {
                k=str[i]-97;
                a[k]++;
            }
		}
		a[str[i]]++;
}

for(i=0;i<26;i++)
{
	cout<<a[k]<<endl;
}
cout<<c;
}
