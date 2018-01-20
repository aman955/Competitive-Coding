#include<iostream>
#include<locale>
using namespace std;

int main()
{
	string a,copya;
	cin>>a;
	string b;
	cin>>b;
	copya=a;
	for(int i=0;i<a.length();i++)
	copya[i]=toupper(copya[i]);
}
