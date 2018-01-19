#include<iostream>
#include<vector>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int k,i,j,n=str.length();
	vector<int> vec;
	cin>>k;
	int arr[26]={};
	for(i=0;i<n;i++)
	arr[str[i]-'a']++;
	
	for(i=0;i<26;i++)
	{
		if(arr[i]>=k)
		vec.push_back(i);
	}
	int m=vec.size();
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if((str[i]-'a')==vec[j])
			cout<<str[i];
		}
	}
	cout<<endl;
}
