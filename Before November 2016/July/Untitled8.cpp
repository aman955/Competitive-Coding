#include<iostream>
#include<locale>
using namespace std;

int main()
{
	int i,j,c=0,d=0;
	string a,copya;
	cin>>a;
	string b;
	cin>>b;
	for(i=0;i<a.length();i++)
	{
			if(a[i]<97)
	{
		if(b.find(a[i])==std::string::npos)
		{
			cout<<"NO";
		}
	}
	}
	if(c!=d)
			cout<<"NO"<<endl;
}
