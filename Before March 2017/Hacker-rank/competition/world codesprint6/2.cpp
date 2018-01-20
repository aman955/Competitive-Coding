#include<iostream>
#include<string>
#include<set>
using namespace std;

int main()
{
	set<long> s;
	string str;
	cin>>str;
	long i,arr[26]={0};
	int temp=1;
	for(i=0;i<str.length()-1;i++)
	{
		if(str[i]==str[i+1])
		{
			temp++;
		}
		else temp=1;
		if(arr[str[i]-'a']<temp)
		{
			arr[str[i]-'a']=temp;
		}
	}
	if(str[str.length()-1]!=str[str.length()-2])
	{
		
		if(arr[str[str.length()-1]-'a']==0)
		arr[str[str.length()-1]-'a']=1;
	}
	for(i=0;i<26;i++)
	{
		while(arr[i]!=0)
		{
			s.insert(arr[i]*(i+1));
			arr[i]--;
		}
	}
	int t;
	long x;
	cin>>t;
	while(t--)
	{
		cin>>x;
		if(s.count(x))
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
	}
}
8 8
4 4
1 1
3 3
7 1
8 1
4 1
4 2
3 5
5 3
