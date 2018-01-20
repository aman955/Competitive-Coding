#include<iostream>
using namespace std;

TOW(int n,char BEG,char AUX,char END)
{
	if(n>=1)
	{
		TOW(n-1,BEG,END,AUX);
		cout<<BEG<<" to "<<END<<endl;
		TOW(n-1,AUX,BEG,END);
	}
}

int main()
{
	int n;
	char A='A',B='B',C='C';
	cin>>n;
	TOW(n,A,B,C);
}
