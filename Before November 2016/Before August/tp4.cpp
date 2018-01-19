#include<string>
#include<iostream>
using namespace std;

int triple(int number);
string triple(string text);

int main()
{
	cout << "Tripling 5: " << triple(5)<< "\n\n";
cout << "Tripling 'gamer': " << triple("gamer");
cout<<triple(5);
cout<<triple(6);
cout<<triple(7);
cout<<triple(8);
return 0;
}
inline int triple(int number)
{
	return(number*3);
	
}
inline string triple(string text)
{
	return(text+text+text);
}

