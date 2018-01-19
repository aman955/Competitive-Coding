#include<iostream>
#include<string>
using namespace std;
int askNumber(int x,int y=1 );

int main()
{
	int x=1,y;
	while(y<100)
	{
		
	int number=askNumber(x+4);
	cout<<"Thanks for entering "<<number<<"\n"<<endl;
	x+=5;
    }
}

int askNumber(int a,int b)
{
	int number;
	do
	{
		cout<<"Enter any number between"<<" <"<<a<<"-"<<b<<"> ";
		cin>>number;
	}
	while(number<a || number>b);
    return number;
}
