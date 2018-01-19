#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<string>aman;
	aman.push_back("rat1");
	aman.push_back("rat2");
	aman.push_back("rat3");
	aman.push_back("rat4");
	cout<<"You have "<<aman.size()<<" number of elements."<<endl;
	cout<<"Your item:\n";
	for(int i=0;i<aman.size();i++)
	{
		cout<<aman[i]<<endl;
	}
	aman.pop_back();
	for(int i=0;i<aman.size();i++)
	{
		cout<<aman[i]<<endl;
	}
	aman.clear();
	if(aman.empty())
	cout<<"empty"<<endl;
	else
	cout<<"you have at least one element left";
}
	

