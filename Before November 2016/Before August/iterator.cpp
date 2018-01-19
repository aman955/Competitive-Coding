#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<string> aman;
	aman.push_back("rat1");
	aman.push_back("rat2");
	aman.push_back("rat3");
	aman.push_back("rat4");
	vector<string>::iterator myIterator;
	vector<string>::const_iterator iter;
	cout<<"Your items:\n";
	for(iter=aman.begin();iter!=aman.end();iter++)
	{
		cout<<*iter<<endl;
	
	}
}
