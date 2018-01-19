#include<iostream>
#include<string>
#include<vector>

using namespace std;

string* ptrtoElement(vector<string>* const pVec, int i);

int main()
{
	vector<string> aman;
	aman.push_back("rat1");
	aman.push_back("rat2");
	aman.push_back("rat3");
	aman.push_back("rat4");
	cout<<"Sending the objected pointer through returned pointer"<<endl;
	cout<<*(ptrtoElement(&aman,0))<<endl;
	
	
}
string* ptrtoElement(vector<string>*const pVec, int i)
{
	return (pVec);
}
